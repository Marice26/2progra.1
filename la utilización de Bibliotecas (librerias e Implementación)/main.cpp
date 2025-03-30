#include <iostream>
#include "Eleccion.h"
using namespace std;

int main() {
    Eleccion eleccion(50, 5);
    eleccion.ingresarPartidos();

    char continuar;
    do {
        eleccion.realizarVotacion();
        eleccion.mostrarResultados();
        cout << "\n¿Desea recalcular la eleccion? (s/n): ";
        cin >> continuar;
        cin.ignore();
        if (continuar == 's') {
            eleccion.reiniciarEleccion();
        }
    } while (continuar == 's');

    return 0;
}
