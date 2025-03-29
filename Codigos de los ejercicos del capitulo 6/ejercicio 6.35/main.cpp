#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // Inicializa la semilla del generador de números aleatorios
    int numeroSecreto = rand() % 1000 + 1; // Número secreto entre 1 y 1000
    int intento, intentos = 0;
    bool adivinado = false;

    cout << "Bienvenido al juego Adivina el Numero!\n";
    cout << "Estoy pensando en un numero entre 1 y 1000.\n";

    while (intentos < 10 && !adivinado) {
        cout << "Intento " << intentos + 1 << ": Ingresa tu numero: ";
        cin >> intento;
        intentos++;

        if (intento == numeroSecreto) {
            adivinado = true;
        } else if (intento < numeroSecreto) {
            cout << "El numero es mayor.\n";
        } else {
            cout << "El numero es menor.\n";
        }
    }

    if (adivinado) {
        if (intentos <= 10) {
            if (intentos <= 10) {
                cout << "¡Adivinaste! ¡Sabias el secreto, o tuviste suerte!\n";
            }
        }
    } else {
        cout << "Debiste haberlo hecho mejor!\n";
    }

    cout << "El numero secreto era: " << numeroSecreto << endl;
    return 0;
}



