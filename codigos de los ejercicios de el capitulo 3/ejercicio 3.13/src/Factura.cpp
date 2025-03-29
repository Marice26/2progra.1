#include "Factura.h"
#include <iostream>
#include <iomanip>

Factura::Factura(std::string numeroPieza, std::string descripcion, int cantidad, int precioPorArticulo) :
    numeroPieza(numeroPieza), descripcion(descripcion), cantidad(cantidad), precioPorArticulo(precioPorArticulo) {
    if (cantidad < 0) {
        this->cantidad = 0;
    }
    if (precioPorArticulo < 0) {
        this->precioPorArticulo = 0;
    }
}

void Factura::establecerNumeroPieza(std::string numeroPieza) {
    this->numeroPieza = numeroPieza;
}

std::string Factura::obtenerNumeroPieza() const {
    return numeroPieza;
}

void Factura::establecerDescripcion(std::string descripcion) {
    this->descripcion = descripcion;
}

std::string Factura::obtenerDescripcion() const {
    return descripcion;
}

void Factura::establecerCantidad(int cantidad) {
    this->cantidad = (cantidad < 0) ? 0 : cantidad;
}

int Factura::obtenerCantidad() const {
    return cantidad;
}

void Factura::establecerPrecioPorArticulo(int precioPorArticulo) {
    this->precioPorArticulo = (precioPorArticulo < 0) ? 0 : precioPorArticulo;
}

int Factura::obtenerPrecioPorArticulo() const {
    return precioPorArticulo;
}

double Factura::obtenerMontoFactura() const {
    return (double)cantidad * precioPorArticulo;
}



