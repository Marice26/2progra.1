#include <iostream>
#include <limits>

using namespace std;

int main() {
    int contador = 0;
    int numero;
    int mayor = numeric_limits<int>::min(); // Inicializa mayor con el menor entero posible

    while (contador < 10) {
        cout << "Introduzca un numero: ";
        cin >> numero;

        if (cin.fail()) { //Manejo de errores de entrada
            cout << "Entrada invalida. Intente de nuevo." << endl;
            cin.clear(); // Limpia el estado de error del flujo de entrada
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignora la entrada inválida
            continue; //Vuelve al inicio del bucle
        }

        if (numero > mayor) {
            mayor = numero;
        }
        contador++;
    }

    cout << "El numero mas grande es: " << mayor << endl;
    return 0;
}
