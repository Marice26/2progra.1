#include "Celda.h"
#include <iostream>
using namespace std;

// Constructor por defecto
Celda::Celda() {}

// Constructor que inicializa una celda con coordenadas y estado de mina
Celda::Celda(int coordenadaX, int coordenadaY, bool estadoMina)
{
    this->coordenadaX = coordenadaX;  // Asigna la coordenada X de la celda
    this->coordenadaY = coordenadaY;  // Asigna la coordenada Y de la celda
    this->mina = estadoMina;  // Establece si la celda contiene una mina
    this->minaDescubierta = false;  // Inicializa como no descubierta
}

// Setter para la coordenada X de la celda
int Celda::setCoordenadaX(int coordenadaX)
{
    this->coordenadaX = coordenadaX;  // Asigna el valor a la coordenada X
}

// Getter para la coordenada X de la celda
int Celda::getCoordenadaX()
{
    return this->coordenadaX;  // Devuelve el valor de la coordenada X
}

// Setter para la coordenada Y de la celda
int Celda::setCoordenadaY(int coordenadaY)
{
    this->coordenadaY = coordenadaY;  // Asigna el valor a la coordenada Y
}

// Getter para la coordenada Y de la celda
int Celda::getCoordenadaY()
{
    return this->coordenadaY;  // Devuelve el valor de la coordenada Y
}

// Setter para el estado de la mina en la celda
// Devuelve 'true' si la mina se ha asignado correctamente, 'false' si ya tenía una mina
bool Celda::setMina(bool estadoMina)
{
    if (this->getMina())  // Si ya tiene una mina, no se cambia el estado
    {
        return false;  // No se puede poner otra mina
    }
    else {
        this->mina = estadoMina;  // Si no tiene mina, asigna el nuevo estado
        return true;
    }
}

// Getter para saber si la celda contiene una mina
bool Celda::getMina()
{
    return this->mina;  // Devuelve 'true' si tiene mina, 'false' si no
}

// Setter para el estado de descubrimiento de la mina
void Celda::setMinaDescubierta(bool minaDescubierta)
{
    this->minaDescubierta = minaDescubierta;  // Establece si la mina ha sido descubierta
}

// Getter para saber si la mina ha sido descubierta
bool Celda::getMinaDescubierta()
{
    return this->minaDescubierta;  // Devuelve 'true' si la mina ha sido descubierta, 'false' si no
}

// Método para imprimir la información de la celda (coordenadas y si tiene mina o no)
void Celda::imprimirCelda()
{
    cout << "Celda en " << this->coordenadaX << ", " << this->coordenadaY << " con mina? " << this->mina << "\n";
}

