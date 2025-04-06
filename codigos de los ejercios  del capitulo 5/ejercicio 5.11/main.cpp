#include <iostream>
#include <cmath>      // Para pow()
#include <iomanip>    // Para setprecision y fixed

using namespace std;

int main() {
    double principal;
    int anios;

    cout << "Ingrese el capital inicial: ";
    cin >> principal;
    cout << "Ingrese el numero de años: ";
    cin >> anios;

    // Validación de entrada
    if (principal <= 0 || anios <= 0) {
        cout << "El capital inicial y el numero de anos deben ser positivos." << endl;
        return 1;
    }

    cout << "\nTasa de interes\tMonto final\tGanancia neta" << endl;
    cout << "-----------------------------------------------" << endl;

    for (int i = 5; i <= 10; ++i) {
        double tasaInteres = i / 100.0; // Convierte 5 a 0.05, 6 a 0.06, etc.
        double montoFinal = principal * pow(1 + tasaInteres, anios);
        double ganancia = montoFinal - principal;

        cout << fixed << setprecision(2);
        cout << i << "%\t\t$" << setw(10) << montoFinal
             << "\t$" << setw(10) << ganancia << endl;
    }

    return 0;
}


