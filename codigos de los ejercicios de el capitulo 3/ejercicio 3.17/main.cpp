#include <iostream>
#include <iomanip>
#include "PerfMed.h"

using namespace std;

int main() {
    PerfMed persona1("Juan", "P�rez", 'M', 15, 5, 1990, 1.75, 70);

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Nombre: " << persona1.obtenerNombre() << " " << persona1.obtenerApellido() << std::endl;
    std::cout << "Sexo: " << persona1.obtenerSexo() << std::endl;
    std::cout << "Fecha de nacimiento: " << persona1.obtenerDiaNacimiento() << "/"
              << persona1.obtenerMesNacimiento() << "/" << persona1.obtenerA�oNacimiento() << std::endl;
    std::cout << "Altura: " << persona1.obtenerAltura() << " m" << std::endl;
    std::cout << "Peso: " << persona1.obtenerPeso() << " kg" << std::endl;

    int a�oActual = 2024;
    int edad = persona1.calcularEdad(a�oActual);
    std::cout << "Edad: " << edad << " a�os" << std::endl;

    double imc = persona1.calcularIMC();
    std::cout << "IMC: " << imc << std::endl;

    double fcMax = persona1.calcularFrecuenciaCardiacaMaxima();
    std::cout << "Frecuencia card�aca m�xima: " << fcMax << " latidos por minuto" << std::endl;

    auto rangoFc = persona1.calcularRangoFrecuenciaCardiaca();
    std::cout << "Rango de frecuencia card�aca: " << rangoFc.first << " - " << rangoFc.second
              << " latidos por minuto" << std::endl;

    return 0;
}


