#include "Fecha.h"

Fecha::Fecha(int mes, int dia, int a�o) : mes(1), dia(dia), a�o(a�o) { //Mes por defecto 1
    establecerMes(mes);
}

void Fecha::establecerMes(int mes) {
    this->mes = (mes >= 1 && mes <= 12) ? mes : 1;
}

int Fecha::obtenerMes() const {
    return mes;
}

void Fecha::establecerDia(int dia) {
    this->dia = dia;
}

int Fecha::obtenerDia() const {
    return dia;
}

void Fecha::establecerA�o(int a�o) {
    this->a�o = a�o;
}

int Fecha::obtenerA�o() const {
    return a�o;
}

void Fecha::mostrarFecha() const {
    std::cout << std::setw(2) << std::setfill('0') << mes << "/"
              << std::setw(2) << std::setfill('0') << dia << "/"
              << a�o << std::endl;
}

