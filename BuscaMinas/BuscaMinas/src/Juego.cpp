#include "Juego.h"
#include <fstream>
#include <unistd.h>
#include <iostream>

using namespace std;

// Función que genera un número aleatorio entre el rango mínimo y máximo
int Juego::aleatorio_en_rango(int minimo, int maximo) {
    return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
}

// Función que genera un número aleatorio dentro de las filas del tablero
int Juego::filaAleatoria() {
    return this->aleatorio_en_rango(0, this->tablero.getAlturaTablero() - 1);
}

// Función que genera un número aleatorio dentro de las columnas del tablero
int Juego::columnaAleatoria() {
    return this->aleatorio_en_rango(0, this->tablero.getAnchoTablero() - 1);
}

// Constructor de la clase Juego que inicializa el tablero, la cantidad de minas, y las vidas
Juego::Juego(Tablero tablero, int cantidadMinas, int vidasIniciales)
{
    this->tablero = tablero;  // Asigna el tablero al objeto juego
    this->cantidadMinas = cantidadMinas;  // Asigna la cantidad de minas
    this->vidas = vidasIniciales;  // Asigna las vidas iniciales
    this->colocarMinasAleatoriamente();  // Coloca las minas aleatoriamente en el tablero
    this->tiempoInicio = std::chrono::steady::now();  // Inicia el cronómetro
    this->victorias = 0;  // Inicializa el contador de victorias
    this->derrotas = 0;  // Inicializa el contador de derrotas
}

// Función que coloca las minas de forma aleatoria en el tablero
void Juego::colocarMinasAleatoriamente() {
    int x, y, minasColocadas = 0;

    // Coloca las minas aleatoriamente en el tablero hasta que se haya alcanzado la cantidad deseada
    while (minasColocadas < this->cantidadMinas) {
        x = this->columnaAleatoria();  // Genera una columna aleatoria
        y = this->filaAleatoria();  // Genera una fila aleatoria
        if (this->tablero.colocarMina(x, y)) {  // Si la mina se coloca correctamente
            minasColocadas++;  // Aumenta el contador de minas colocadas
        }
    }
}

// Solicita al usuario que ingrese una fila donde desea jugar (ajustado para índice 0)
int Juego::solicitarFilaUsuario() {
    int fila = 0;
    cout << "Ingresa la FILA en la que desea jugar: ";
    cin >> fila;
    return fila - 1;  // Ajusta para que el valor sea 0-indexado
}

// Solicita al usuario que ingrese una columna donde desea jugar (ajustado para índice 0)
int Juego::solicitarColumnaUsuario() {
    int columna = 0;
    cout << "Ingresa la COLUMNA en la que desea jugar: ";
    cin >> columna;
    return columna - 1;  // Ajusta para que el valor sea 0-indexado
}

// Verifica si el jugador ha ganado el juego, basado en la cantidad de celdas sin minas y no descubiertas
bool Juego::jugadorGana() {
    int conteo = this->tablero.contarCeldasSinMinasYSinDescubrir();
    return conteo == 0;  // El jugador gana si no hay más celdas sin minas y sin descubrir
}

// Muestra el marcador con el total de victorias y derrotas
void Juego::mostrarMarcador() {
    cout << "Total de victorias: " << victorias << endl;
    cout << "Total de derrotas: " << derrotas << endl;
}

// Función principal que maneja la lógica del juego
void Juego::iniciar() {
    int fila, columna;

    while (true) {
        this->tablero.imprimir();  // Muestra el tablero en cada iteración
        cout << "Vidas Restantes: " << this->vidas << endl;  // Muestra la cantidad de vidas restantes
        this->mostrarCronometro();  // Muestra el cronómetro

        fila = this->solicitarFilaUsuario();  // Solicita la fila al usuario
        columna = this->solicitarColumnaUsuario();  // Solicita la columna al usuario

        bool respuestaAUsuario = this->tablero.descubrirMina(columna, fila);  // Descubre la mina en la posición seleccionada

        // Si el jugador descubre una mina
        if (!respuestaAUsuario) {
            cout << "¡Has descubierto una mina!\n";
            this->perderVida();  // Pierde una vida

            // Si el jugador pierde todas sus vidas, termina el juego
            if (this->vidas == 0) {
                cout << "Perdiste todas tus vidas, fin del juego\n";
                break;
            }
        }

        // Si el jugador gana, se muestra el mensaje de victoria
        if (this->jugadorGana()) {
            cout << "¡Ganaste el Juego!\n";
            this->victorias++;  // Aumenta el contador de victorias
            this->tablero.setModoDesarrollador(true);  // Activa el modo desarrollador en el tablero
            this->tablero.imprimir();  // Muestra el tablero final
            break;
        }
    }
    mostrarMarcador();  // Muestra el marcador al final del juego
}

// Función que muestra el tiempo transcurrido desde el inicio del juego en formato "minutos y segundos"
void Juego::mostrarCronometro() {
    // Calculamos el tiempo transcurrido en segundos
    auto tiempoActual = std::chrono::steady_clock::now();
    std::chrono::duration<float> duracion = tiempoActual - tiempoInicio;
    int segundos = static_cast<int>(duracion.count());

    // Variable estática para evitar imprimir el mismo tiempo varias veces por segundo
    static int segundosAnteriores = -1;

    // Si el tiempo ha cambiado (es decir, ha pasado al menos 1 segundo)
    if (segundos != segundosAnteriores) {
        segundosAnteriores = segundos;  // Actualizamos el valor de los segundos
        int minutos = segundos / 60;  // Calculamos los minutos
        segundos = segundos % 60;  // Calculamos los segundos restantes
        cout << "Tiempo Transcurrido: " << minutos << " minutos y " << segundos << " segundos" << endl;
    }
}

// Función que maneja la pérdida de una vida por parte del jugador
void Juego::perderVida() {
    this->vidas--;  // Disminuye la cantidad de vidas

    // Si aún quedan vidas, muestra un mensaje de cuántas quedan
    if (this->vidas > 0) {
        cout << "¡Has perdido una vida! Vidas restantes: " << this->vidas << endl;
    }
    else {
        // Si el jugador se queda sin vidas, muestra el tablero en modo desarrollador
        cout << "¡Has perdido todas tus vidas! Mostrando el tablero en modo desarrollador.\n";
        this->tablero.setModoDesarrollador(true);  // Activa el modo desarrollador
        this->tablero.imprimir();  // Muestra el tablero en modo desarrollador
    }
}

