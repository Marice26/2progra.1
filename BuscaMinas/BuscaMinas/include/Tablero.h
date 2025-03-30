#ifndef TABLERO_H
#define TABLERO_H

#include <iostream>
#include <vector>
#include "Celda.h"

using namespace std;

// Clase Tablero: Representa el tablero de Buscaminas.
class Tablero
{
public:
    // Constructores
    Tablero();
    Tablero(int alturaTablero, int anchoTablero, bool modoDesarrollador);

    // M�todos para obtener y establecer dimensiones del tablero
    int getAlturaTablero();
    int setAlturaTablero(int alturaTablero);
    int getAnchoTablero();
    int setAnchoTablero(int anchoTablero);

    // M�todos para el modo desarrollador
    bool getModoDesarrollador();
    bool setModoDesarrollador(bool modoDesarrollador);

    // M�todos de impresi�n del tablero
    void imprimirSeparadorEncabezado();
    void imprimirSeparadorFilas();
    void imprimirEncabezado();
    void imprimir();

    // M�todos de juego
    bool colocarMina(int x, int y);
    bool descubrirMina(int x, int y);
    int contarCeldasSinMinasYSinDescubrir();

private:
    int alturaTablero, anchoTablero;
    bool modoDesarrollador;
    vector<vector<Celda>> contenidoTablero;

    // M�todos auxiliares
    string getRepresentacionMina(int x, int y);
    int minasCercanas(int fila, int columna);
};

#endif // TABLERO_H
