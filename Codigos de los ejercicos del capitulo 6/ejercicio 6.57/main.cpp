#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main() {
    // Inicializar la semilla del generador de números aleatorios
    srand(time(0));

    // Obtener una respuesta del usuario (simulando una respuesta del ejercicio 6.57)
    bool respuestaCorrecta; // Reemplaza con la lógica real para determinar la respuesta correcta
    cout << "Introduce tu respuesta (1 para correcto, 0 para incorrecto): ";
    cin >> respuestaCorrecta;


    // Generar un número aleatorio entre 1 y 4
    int numeroAleatorio = rand() % 4 + 1;

    // Seleccionar una respuesta usando un switch
    if (respuestaCorrecta) {
        switch (numeroAleatorio) {
            case 1: cout << "Muy bien!" << endl; break;
            case 2: cout << "Excelente!" << endl; break;
            case 3: cout << "Buen trabajo!" << endl; break;
            case 4: cout << "Sigue asi!" << endl; break;
        }
    } else {
        switch (numeroAleatorio) {
            case 1: cout << "No. Por favor intenta de nuevo." << endl; break;
            case 2: cout << "Incorrecto. Intenta una vez mas." << endl; break;
            case 3: cout << "No te rindas!" << endl; break;
            case 4: cout << "No. Sigue intentando." << endl; break;
        }
    }

    return 0;
}
