#include <vector>
#include <iostream>

// Clase Celda: representa cada celda del tablero
class Celda {
private:
    bool mina;               // Indica si la celda contiene una mina
    bool minaDescubierta;    // Indica si la mina de la celda ha sido descubierta

public:
    // Constructor por defecto: inicializa la celda sin mina y sin ser descubierta
    Celda() : mina(false), minaDescubierta(false) {}

    // Getter para saber si la celda tiene una mina
    bool getMina() const { return mina; }

    // Setter para asignar si la celda tiene una mina
    void setMina(bool estado) { mina = estado; }

    // Getter para saber si la mina de la celda ha sido descubierta
    bool getMinaDescubierta() const { return minaDescubierta; }

    // Setter para asignar el estado de la mina (descubierta o no)
    void setMinaDescubierta(bool estado) { minaDescubierta = estado; }
};

// Clase Tablero: representa el tablero del juego, que contiene varias celdas
class Tablero {
private:
    int alturaTablero;               // Altura (número de filas) del tablero
    int anchoTablero;                // Ancho (número de columnas) del tablero
    std::vector<std::vector<Celda>> contenidoTablero; // Matriz de celdas que constituye el tablero

public:
    // Constructor que inicializa el tablero con un tamaño de altura y ancho especificados
    Tablero(int altura, int ancho) : alturaTablero(altura), anchoTablero(ancho) {
        contenidoTablero.resize(altura, std::vector<Celda>(ancho)); // Redimensiona la matriz de celdas
    }

    // Coloca una mina en la celda especificada por las coordenadas (x, y)
    void colocarMina(int x, int y) {
        contenidoTablero[y][x].setMina(true);  // Establece que la celda contiene una mina
    }

    // Descubre una celda especificada por las coordenadas (x, y)
    // Devuelve true si no hay mina en esa celda, false si hay mina
    bool descubrirMina(int x, int y) {
        contenidoTablero[y][x].setMinaDescubierta(true);  // Marca la celda como descubierta
        return !contenidoTablero[y][x].getMina();  // Devuelve true si no hay mina en la celda
    }

    // Imprime el tablero en la consola, mostrando el estado de las celdas
    void imprimir() {
        for (int y = 0; y < alturaTablero; y++) {
            for (int x = 0; x < anchoTablero; x++) {
                // Si la celda ha sido descubierta, muestra el símbolo de la mina (si la tiene)
                if (contenidoTablero[y][x].getMinaDescubierta()) {
                    std::cout << (contenidoTablero[y][x].getMina() ? "*" : ".") << " ";  // '*' si mina, '.' si no
                } else {
                    std::cout << "? ";  // Si la celda no ha sido descubierta, muestra un "?"
                }
            }
            std::cout << std::endl;  // Salto de línea después de cada fila
        }
    }

    // Cuenta cuántas celdas en el tablero no tienen mina y no han sido descubiertas
    int contarCeldasSinMinasYSinDescubrir() {
        int contador = 0;
        for (int y = 0; y < alturaTablero; y++) {
            for (int x = 0; x < anchoTablero; x++) {
                // Incrementa el contador si la celda no tiene mina y no ha sido descubierta
                if (!contenidoTablero[y][x].getMinaDescubierta() && !contenidoTablero[y][x].getMina()) {
                    contador++;
                }
            }
        }
        return contador;  // Devuelve el número total de celdas sin minas y no descubiertas
    }
};

