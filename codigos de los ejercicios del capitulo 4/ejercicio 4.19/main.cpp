#include <iostream>
#include <limits>
#include <set>

using namespace std;

int main() {
    set<int> numeros;
    int numero;
    int contador = 0;
    int mayor = numeric_limits<int>::min();
    int segundoMayor = numeric_limits<int>::min();

    while (contador < 10) {
        cout << "Introduzca un numero: ";
        cin >> numero;

        if (cin.fail()) {
            cout << "Entrada invalida. Intente de nuevo." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        // Verificar si el número ya existe en el set
        if (numeros.find(numero) == numeros.end()) {
            numeros.insert(numero);
            contador++;

            // Actualizar mayor y segundoMayor
            if (numero > mayor) {
                segundoMayor = mayor;
                mayor = numero;
            } else if (numero > segundoMayor) {
                segundoMayor = numero;
            }
        } else {
            cout << "Número ya introducido. Intente con otro numero." << endl;
        }
    }

    if (numeros.size() < 2) {
        cout << "No se introdujeron suficientes numeros unicos para encontrar los dos mayores." << endl;
    } else {
        cout << "Los dos numeros mas grandes son: " << mayor << " y " << segundoMayor << endl;
    }

    return 0;
}
