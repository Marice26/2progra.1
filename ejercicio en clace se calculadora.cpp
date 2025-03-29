#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double num1, num2;
    char operation;
    char recalcular;

    cout << "***********************************" << endl;
    cout << "********* CALCULADORA ***********" << endl;
    cout << "***********************************" << endl;

    do {
        cout << "Ingrese el primer numero: ";
        cin >> num1;

        cout << "Ingrese el operador (+, -, *, /,): ";
        cin >> operation;

        cout << "Ingrese el segundo numero: ";
        cin >> num2;

        switch (operation) {
            case '+':
                cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
                break;
            case '-':
                cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
                break;
            case '*':
                cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
                break;
            case '/':
                if (num2 == 0) {
                    cout << "Error: No se puede dividir entre cero." << endl;
                } else {
                    cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
                }

        }

        cout << "¿Desea realizar otro calculo? (s/n): ";
        cin >> recalcular;

    } while (recalcular == 's' || recalcular == 'S');

    cout << "hasta la proxima vaquero!" << endl;

    return 0;
}
