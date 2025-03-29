#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double kilometrosTotales = 0;
    double litrosTotales = 0;
    double kilometros;
    double litros;

    cout << fixed << setprecision(6); // Para mostrar 6 decimales

    cout << "Introduzca los kilometros usados (-1 para salir): ";
    cin >> kilometros;

    while (kilometros != -1) {
        cout << "Introduzca los litros usados en este reabastecimiento: ";
        cin >> litros;

        if (litros > 0) { //no divivir entre cero si no me va error
            kilometrosTotales += kilometros;
            litrosTotales += litros;
            double kpl = kilometros / litros;
            cout << "KPL en este reabastecimiento: " << kpl << endl;
        } else {
            cout << "La cantidad de litros debe ser mayor que cero." << endl;
        }

        cout << "Introduzca los kilometros usados (-1 para salir): ";
        cin >> kilometros;
    }

    if (litrosTotales > 0) {
        double kplTotal = kilometrosTotales / litrosTotales;
        cout << "Total KPL: " << kplTotal << endl;
    } else {
        cout << "No se han registrado reabastecimientos." << endl;
    }

    return 0;
}
