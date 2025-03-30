#include "Juego.h"
#include <fstream>
#include <unistd.h>
#include <iostream>

using namespace std;

int Juego::aleatorio_en_rango(int minimo, int maximo) {
    return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
}

int Juego::filaAleatoria() {
    return this->aleatorio_en_rango(0, this->tablero.getAlturaTablero() - 1);
}

int Juego::columnaAleatoria() {
    return this->aleatorio_en_rango(0, this->tablero.getAnchoTablero() - 1);
}

Juego::Juego(Tablero tablero, int cantidadMinas, int vidasIniciales)
{
    this->tablero = tablero;
    this->cantidadMinas = cantidadMinas;
    this->vidas = vidasIniciales;
    this->colocarMinasAleatoriamente();
    this->tiempoInicio = std::chrono::steady::now();
    this->victorias = 0;
    this->derrotas = 0;
}

void Juego::colocarMinasAleatoriamente() {
    int x, y, minasColocadas = 0;

    while (minasColocadas < this->cantidadMinas) {
        x = this->columnaAleatoria();
        y = this->filaAleatoria();
        if (this->tablero.colocarMina(x, y)) {
            minasColocadas++;
        }
    }
}

int Juego::solicitarFilaUsuario() {
    int fila = 0;
    cout << "Ingresa la FILA en la que desea jugar: ";
    cin >> fila;
    return fila - 1;  // Ajusta para que sea 0-indexado
}

int Juego::solicitarColumnaUsuario() {
    int columna = 0;
    cout << "Ingresa la COLUMNA en la que desea jugar: ";
    cin >> columna;
    return columna - 1;  // Ajusta para que sea 0-indexado
}

bool Juego::jugadorGana() {
    int conteo = this->tablero.contarCeldasSinMinasYSinDescubrir();
    return conteo == 0;  // Retorna verdadero si el jugador ha ganado
}

void Juego::mostrarMarcador() {
    cout << "Total de victorias: " << victorias << endl;
    cout << "Total de derrotas: " << derrotas << endl;
}

void Juego::iniciar() {
    int fila, columna;
    while (true) {
        this->tablero.imprimir();
        cout << "Vidas Restantes: " << this->vidas << endl; // mostrar cantidad de vidas
        this->mostrarCronometro(); // Mostrar el cronómetro
        fila = this->solicitarFilaUsuario();
        columna = this->solicitarColumnaUsuario();
        bool respuestaAUsuario = this->tablero.descubrirMina(columna, fila);

        if (!respuestaAUsuario)
        {
            count << "has descubiero una mina\n";
            this->perderVida(); // vidas

            if(this->vidas == 0) // vidas
            {
                count<< "perdiste todas tus vidas, fin del juego" << endl;
                break;
            }
        }
        cout << "has descubierto una mina \n";
this->perderVida(); // vidas
if (this->vidas == 0) // vidas
{
cout << "perdiste todas tus vidas, fin del juego" << endl;
break;
}
}

        if (this->jugadorGana()) {
            cout << "Ganaste el Juego\n";
            this->victorias++;  // Incrementa el contador de victorias
            this->tablero.setModoDesarrollador(true);
            this->tablero.imprimir();
            break;
        }
    }
    mostrarMarcador();  // Muestra el marcador al final del juego
}
void Juego::mostrarCronometro()
{
    // Calculamos el tiempo transcurrido en segundos
    auto tiempoActual = std::chrono::steady_clock::now();
    std::chrono::duration<float> duracion = tiempoActual - tiempoInicio;
    int segundos = static_cast<int>(duracion.count());

    // Variable estática para evitar imprimir el mismo tiempo varias veces por segundo
    static int segundosAnteriores = -1;

    // Si el tiempo ha cambiado (es decir, ha pasado al menos 1 segundo)
    if (segundos != segundosAnteriores)
    {
        segundosAnteriores = segundos; // Actualizamos el valor de los segundos
        int minutos = segundos / 60;
        segundos = segundos % 60;
        cout << "Tiempo Transcurrido: " << minutos << " minutos y " << segundos << " segundos" << endl;
    }
}

void Juego::perderVida()
{
    this->vidas--;

    if (this->vidas > 0)
    {
        cout << "¡Has perdido una vida! Vidas restantes: " << this->vidas << endl;
    }
    else
    {
        cout << "¡Has perdido todas tus vidas! Mostrando el tablero en modo desarrollador.\n";
        this->tablero.setModoDesarrollador(true);
        this->tablero.imprimir();
    }
}
