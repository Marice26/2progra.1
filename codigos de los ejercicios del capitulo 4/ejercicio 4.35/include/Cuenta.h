#ifndef CUENTA_H
#define CUENTA_H

#include <string>

class Cuenta {
public:
    unsigned int numeroCuenta;
    std::string primerNombre;
    std::string apellido;
    double saldo;

    Cuenta(unsigned int num, std::string nombre, std::string apellido, double sal);
};

#endif
