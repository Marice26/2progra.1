#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double principal = 24.00; // Monto principal inicial
    int años = 387;           // Número de años
    double tasa;              // Tasa de interés anual

    cout << fixed << setprecision(2); // Formato de salida para dos decimales

    for (tasa = 0.05; tasa <= 0.10; tasa += 0.01) {
        double monto = principal * pow(1 + tasa, años); // Fórmula de interés compuesto
        cout << "Tasa de interés: " << tasa * 100 << "%" << endl;
        cout << "Monto final después de " << años << " años: $" << monto << endl << endl;
    }

    return 0;
}
