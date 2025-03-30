#include <vector>
#include <iostream>

class Celda {
private:
    bool mina;
    bool minaDescubierta;

public:
    Celda() : mina(false), minaDescubierta(false) {}
    bool getMina() const { return mina; }
    void setMina(bool estado) { mina = estado; }
    bool getMinaDescubierta() const { return minaDescubierta; }
    void setMinaDescubierta(bool estado) { minaDescubierta = estado; }
};

class Tablero {
private:
    int alturaTablero;
    int anchoTablero;
    std::vector<std::vector<Celda>> contenidoTablero;

public:
    Tablero(int altura, int ancho) : alturaTablero(altura), anchoTablero(ancho) {
        contenidoTablero.resize(altura, std::vector<Celda>(ancho));
    }

    void colocarMina(int x, int y) {
        contenidoTablero[y][x].setMina(true);
    }

    bool descubrirMina(int x, int y) {
        contenidoTablero[y][x].setMinaDescubierta(true);
        return !contenidoTablero[y][x].getMina();
    }

    void imprimir() {
        for (int y = 0; y < alturaTablero; y++) {
            for (int x = 0; x < anchoTablero; x++) {
                if (contenidoTablero[y][x].getMinaDescubierta()) {
                    std::cout << (contenidoTablero[y][x].getMina() ? "*" : ".") << " ";
                } else {
                    std::cout << "? ";
                }
            }
            std::cout << std::endl;
        }
    }

    int contarCeldasSinMinasYSinDescubrir() {
        int contador = 0;
        for (int y = 0; y < alturaTablero; y++) {
            for (int x = 0; x < anchoTablero; x++) {
                if (!contenidoTablero[y][x].getMinaDescubierta() && !contenidoTablero[y][x].getMina()) {
                    contador++;
                }
            }
        }
        return contador;
    }
};
