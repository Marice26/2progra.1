#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double ventas;
    double salario;


    cout << fixed << setprecision(2);

    cout << "Introduzca las ventas en dolares (0 para salir): ";
    cin >> ventas;

    while (ventas != 0) {
        if (ventas >= 5000) {
            salario = 200 + ventas * 0.09; // 9% de comisión si ventas >= 5000
        } else {
            salario = 200 + ventas * 0.07; // 7% de comisión si ventas < 5000
        }
        cout << "El salario es: " << salario << endl;
        cout << "Introduzca las ventas en dolares (-1 para salir): ";
        cin >> ventas;
    }

    return 0;
}
