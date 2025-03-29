#ifndef FECHA_H
#define FECHA_H
#include <iostream>
#include <iomanip>

class Fecha
{
public:
    Fecha(int mes, int dia, int año);
    void establecerMes(int mes);
    int obtenerMes() const;
    void establecerDia(int dia);
    int obtenerDia() const;
    void establecerAño(int año);
    int obtenerAño() const;
    void mostrarFecha() const;

private:
    int mes;
    int dia;
    int año;
};

#endif // FECHA_H
