#include <iostream>
#include "Cuenta.h"

int main() {
    // a) Inicializar la variable unsigned int int_contadoresEstudiantes con 0.
    unsigned int int_contadoresEstudiantes = 0;

    // b) Inicializar la variable double double_saldoInicial con 1000.0
    double double_saldoInicial = 1000.0;

    // c) Inicializar un objeto de la clase Cuenta
    Cuenta cuenta1(12345, "Margarita", "Joya", 500.50);

    std::cout << "Contador de estudiantes: " << int_contadoresEstudiantes << std::endl;
    std::cout << "Saldo inicial: " << double_saldoInicial << std::endl;
    std::cout << "Numero de cuenta: " << cuenta1.numeroCuenta
              << ", Nombre: " << cuenta1.primerNombre << " " << cuenta1.apellido
              << ", Saldo: " << cuenta1.saldo << std::endl;

    return 0;
}
