#include "Cuenta.h"

Cuenta::Cuenta(unsigned int num, std::string nombre, std::string apellido, double sal)
    : numeroCuenta(num), primerNombre(nombre), apellido(apellido), saldo(sal) {}
