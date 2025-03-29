#include "Fecha.h"
#include <iostream>

using namespace std;

int main() {
    Fecha fecha1(12, 25, 2024);
    Fecha fecha2(13, 32, 2023); //Mes y dia incorrectos
    Fecha fecha3(2, 29, 2024); //Año bisiesto

    std::cout << "Fecha 1: ";
    fecha1.mostrarFecha();

    std::cout << "Fecha 2: ";
    fecha2.mostrarFecha();

    std::cout << "Fecha 3: ";
    fecha3.mostrarFecha();

    return 0;
}
