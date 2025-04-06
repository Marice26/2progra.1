#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double principal = 24.00; // Monto principal inicial
    int a�os = 387;           // N�mero de a�os
    double tasa;              // Tasa de inter�s anual

    cout << fixed << setprecision(2); // Formato de salida para dos decimales

    for (tasa = 0.05; tasa <= 0.10; tasa += 0.01) {
        double monto = principal * pow(1 + tasa, a�os); // F�rmula de inter�s compuesto
        cout << "Tasa de inter�s: " << tasa * 100 << "%" << endl;
        cout << "Monto final despu�s de " << a�os << " a�os: $" << monto << endl << endl;
    }

    return 0;
}
