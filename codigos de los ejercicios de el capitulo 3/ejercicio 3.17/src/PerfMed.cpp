#include "PerfMed.h"
#include <cmath>

PerfMed::PerfMed(std::string nombre, std::string apellido, char sexo, int dia, int mes, int año,
                 double altura, double peso) :
        nombre(nombre), apellido(apellido), sexo(sexo), diaNacimiento(dia), mesNacimiento(mes),
        añoNacimiento(año), altura(altura), peso(peso) {}


void PerfMed::establecerNombre(const std::string& nombre) { this->nombre = nombre; }
std::string PerfMed::obtenerNombre() const { return nombre; }
void PerfMed::establecerApellido(const std::string& apellido) { this->apellido = apellido; }
std::string PerfMed::obtenerApellido() const { return apellido; }
void PerfMed::establecerSexo(char sexo) { this->sexo = sexo; }
char PerfMed::obtenerSexo() const { return sexo; }
void PerfMed::establecerFechaNacimiento(int dia, int mes, int año) {
    diaNacimiento = dia;
    mesNacimiento = mes;
    añoNacimiento = año;
}
int PerfMed::obtenerDiaNacimiento() const { return diaNacimiento; }
int PerfMed::obtenerMesNacimiento() const { return mesNacimiento; }
int PerfMed::obtenerAñoNacimiento() const { return añoNacimiento; }
void PerfMed::establecerAltura(double altura) { this->altura = altura; }
double PerfMed::obtenerAltura() const { return altura; }
void PerfMed::establecerPeso(double peso) { this->peso = peso; }
double PerfMed::obtenerPeso() const { return peso; }


int PerfMed::calcularEdad(int añoActual) const {
    int edad = añoActual - añoNacimiento;
    if ((mesNacimiento > (añoActual % 12 + 1)) || (mesNacimiento == (añoActual % 12 + 1) && diaNacimiento > 1)) {
        edad--;
    }
    return edad;
}

double PerfMed::calcularIMC() const {
    return peso / (altura * altura);
}

double PerfMed::calcularFrecuenciaCardiacaMaxima() const {
    int edad = calcularEdad(2024); //Asumiendo año actual 2024
    return 220 - edad;
}

std::pair<double, double> PerfMed::calcularRangoFrecuenciaCardiaca() const {
    double fcMax = calcularFrecuenciaCardiacaMaxima();
    return std::make_pair(0.5 * fcMax, 0.85 * fcMax);
}

