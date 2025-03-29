#include "PerfMed.h"
#include <cmath>

PerfMed::PerfMed(std::string nombre, std::string apellido, char sexo, int dia, int mes, int a�o,
                 double altura, double peso) :
        nombre(nombre), apellido(apellido), sexo(sexo), diaNacimiento(dia), mesNacimiento(mes),
        a�oNacimiento(a�o), altura(altura), peso(peso) {}


void PerfMed::establecerNombre(const std::string& nombre) { this->nombre = nombre; }
std::string PerfMed::obtenerNombre() const { return nombre; }
void PerfMed::establecerApellido(const std::string& apellido) { this->apellido = apellido; }
std::string PerfMed::obtenerApellido() const { return apellido; }
void PerfMed::establecerSexo(char sexo) { this->sexo = sexo; }
char PerfMed::obtenerSexo() const { return sexo; }
void PerfMed::establecerFechaNacimiento(int dia, int mes, int a�o) {
    diaNacimiento = dia;
    mesNacimiento = mes;
    a�oNacimiento = a�o;
}
int PerfMed::obtenerDiaNacimiento() const { return diaNacimiento; }
int PerfMed::obtenerMesNacimiento() const { return mesNacimiento; }
int PerfMed::obtenerA�oNacimiento() const { return a�oNacimiento; }
void PerfMed::establecerAltura(double altura) { this->altura = altura; }
double PerfMed::obtenerAltura() const { return altura; }
void PerfMed::establecerPeso(double peso) { this->peso = peso; }
double PerfMed::obtenerPeso() const { return peso; }


int PerfMed::calcularEdad(int a�oActual) const {
    int edad = a�oActual - a�oNacimiento;
    if ((mesNacimiento > (a�oActual % 12 + 1)) || (mesNacimiento == (a�oActual % 12 + 1) && diaNacimiento > 1)) {
        edad--;
    }
    return edad;
}

double PerfMed::calcularIMC() const {
    return peso / (altura * altura);
}

double PerfMed::calcularFrecuenciaCardiacaMaxima() const {
    int edad = calcularEdad(2024); //Asumiendo a�o actual 2024
    return 220 - edad;
}

std::pair<double, double> PerfMed::calcularRangoFrecuenciaCardiaca() const {
    double fcMax = calcularFrecuenciaCardiacaMaxima();
    return std::make_pair(0.5 * fcMax, 0.85 * fcMax);
}

