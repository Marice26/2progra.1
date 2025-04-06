#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double poblacionActual;
    double tasaCrecimientoAnual;

    cout << "Introduzca la población mundial actual: ";
    cin >> poblacionActual;

    cout << "Introduzca la tasa de crecimiento anual (como decimal, ej. 0.02 para 2%): ";
    cin >> tasaCrecimientoAnual;

    cout << endl << setw(5) << "Año"
         << setw(20) << "Población"
         << setw(35) << "Doble de la poblacion actual" << endl;
    cout << string(70, '-') << endl;

    double poblacionAnticipada = poblacionActual;
    double doblePoblacion = poblacionActual * 2;
    int anioDoble = -1; // Año en que se duplica la población

    for (int anio = 1; anio <= 75; anio++) {
        poblacionAnticipada *= (1 + tasaCrecimientoAnual);

        cout << setw(5) << anio
             << setw(20) << fixed << setprecision(0) << poblacionAnticipada;

        if (anioDoble == -1 && poblacionAnticipada >= doblePoblacion) {
            anioDoble = anio;
            cout << setw(28) << anio;
        } else {
            cout << setw(28) << "-";
        }

        cout << endl;
    }

    if (anioDoble != -1) {
        cout << endl << "La población será el doble de la actual en el ano: " << anioDoble << endl;
    } else {
        cout << endl << "La poblacion no duplicará en los proximos 75 años con la tasa de crecimiento dada." << endl;
    }

    return 0;
}
