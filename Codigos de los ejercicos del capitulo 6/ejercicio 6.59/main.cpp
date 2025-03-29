#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int nivelDificultad;
    cout << "Introduce el nivel de dificultad (1, 2, 3...): ";
    cin >> nivelDificultad;

    int num1, num2;
    int maximo = 0;

    switch (nivelDificultad) {
        case 1: maximo = 9; break; // Números de un dígito
        case 2: maximo = 99; break; // Números de dos dígitos
        case 3: maximo = 999; break; // Números de tres dígitos
        default:
            cout << "Nivel de dificultad no valido." << endl;
            return 1; // Indica un error
    }

    num1 = rand() % (maximo + 1);
    num2 = rand() % (maximo + 1);

    cout << "Cuanto es " << num1 << " * " << num2 << "? ";
    int respuestaUsuario;
    cin >> respuestaUsuario;

    if (respuestaUsuario == num1 * num2) {
        cout << "Correcto!" << endl;
    } else {
        cout << "Incorrecto. La respuesta correcta es " << num1 * num2 << endl;
    }

    return 0;
}






