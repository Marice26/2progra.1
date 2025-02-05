#include <iostream>

using namespace std;

int main() {
    double num1, num2, resultado;
    int opcion;

    cout << "Laboratorio 1" << endl;
    cout << "Calculadora basica" << endl;

    cout << "Ingresa el primer numero: ";// no se por que en vez de la u me sale un punto.
    cin >> num1;

    cout << "Ingresa el segundo numero: ";
    cin >> num2;

    cout << "Selecciona la operacion:" << endl;
    cout << "1. Sumar" << endl;
    cout << "2. Restar" << endl;
    cout << "3. Multiplicar" << endl;
    cout << "4. Dividir" << endl;
    cout << "Ingresa el numero de la operacion: ";// ya solucionamos lo del punto
    cin >> opcion;

    if (opcion >= 1 && opcion <= 4) {
        if (opcion == 1) {
            resultado = num1 + num2;
            cout << "El resultado de la suma es: " << resultado << endl;
        } else if (opcion == 2) {
            resultado = num1 - num2;
            cout << "El resultado de la resta es: " << resultado << endl;
        } else if (opcion == 3) {
            resultado = num1 * num2;
            cout << "El resultado de la multiplicación es: " << resultado << endl;
        } else if (opcion == 4) {
            if (num2 == 0) {
                cout << "No se puede dividir entre cero." << endl;
            } else {
                resultado = num1 / num2;
                cout << "El resultado de la división es: " << resultado << endl;
            }
        }
    } else {
        cout << "Opcion invalida pruede de nuevo." << endl;// para motivar para que lo hagan de nuevo
    }

    return 0;
}
