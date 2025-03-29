#ifndef PERF_MED_H
#define PERF_MED_H
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <utility>

class PerfMed
{
public:
    PerfMed(std::string nombre, std::string apellido, char sexo, int dia, int mes, int a�o,double altura, double peso);
    void establecerNombre(const std::string& nombre);
    std::string obtenerNombre() const;
    void establecerApellido(const std::string& apellido);
    std::string obtenerApellido() const;
    void establecerSexo(char sexo);
    char obtenerSexo() const;
    void establecerFechaNacimiento(int dia, int mes, int a�o);
    int obtenerDiaNacimiento() const;
    int obtenerMesNacimiento() const;
    int obtenerA�oNacimiento() const;
    void establecerAltura(double altura);
    double obtenerAltura() const;
    void establecerPeso(double peso);
    double obtenerPeso() const;
    int calcularEdad(int a�oActual) const;
    double calcularIMC() const;
    double calcularFrecuenciaCardiacaMaxima() const;
    std::pair<double, double> calcularRangoFrecuenciaCardiaca() const;

private:
    std::string nombre;
    std::string apellido;
    char sexo;
    int diaNacimiento;
    int mesNacimiento;
    int a�oNacimiento;
    double altura;
    double peso;
};




#endif // PERFMED_H
