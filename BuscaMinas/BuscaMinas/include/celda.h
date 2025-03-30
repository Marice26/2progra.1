#ifndef CELDA_H
#define CELDA_H

// Clase Celda: Representa una celda en el tablero del juego.
// Contiene coordenadas, estado de mina y si ha sido descubierta.
class Celda
{
public:
    // Constructores
    Celda();
    Celda(int coordenadaX, int coordenadaY, bool estadoMina);

    // M�todos para obtener y modificar las coordenadas
    int setCoordenadaX(int coordenadaX);
    int getCoordenadaX();
    int setCoordenadaY(int coordenadaY);
    int getCoordenadaY();

    // M�todos para gestionar el estado de la mina
    bool setMina(bool estadoMina);
    bool getMina();
    bool setMinaDescubierta(bool minaDescubierta);
    bool getMinaDescubierta();

    // M�todo para imprimir la celda en el tablero
    void imprimirCelda();

private:
    int coordenadaX, coordenadaY; // Posici�n de la celda en el tablero
    bool mina, minaDescubierta;   // Estado de la celda (con mina y descubierta)
};

#endif // CELDA_H
