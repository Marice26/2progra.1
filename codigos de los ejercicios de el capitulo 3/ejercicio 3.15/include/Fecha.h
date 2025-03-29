#ifndef FECHA_H
#define FECHA_H
#include <iostream>
#include <iomanip>

class Fecha
{
public:
    Fecha(int mes, int dia, int a�o);
    void establecerMes(int mes);
    int obtenerMes() const;
    void establecerDia(int dia);
    int obtenerDia() const;
    void establecerA�o(int a�o);
    int obtenerA�o() const;
    void mostrarFecha() const;

private:
    int mes;
    int dia;
    int a�o;
};

#endif // FECHA_H
