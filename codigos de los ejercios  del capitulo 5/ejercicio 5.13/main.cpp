#include <iostream>

using namespace std;

int main() {
  int numero;

  for (int i = 0; i < 5; ++i) {
    cout << "Ingrese un numero entre 1 y 30: ";
    cin >> numero;

    // Validación de entrada
    if (numero < 1 || numero > 30) {
      cout << "Numero invalido. Ingrese un numero entre 1 y 30." << endl;
      i--; // Decrementar i para volver a pedir el número
      continue; // Saltar al siguiente ciclo del bucle for
    }

    for (int j = 0; j < numero; ++j) {
      cout << "*";
    }
    cout << endl;
  }

  return 0;
}



