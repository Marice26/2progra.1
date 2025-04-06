#include <iostream>

using namespace std;

int main() {
  int tamano;

  // Solicitar al usuario el tamaño del cuadrado
  cout << "Introduzca el tamaño del lado del cuadrado (entre 1 y 20): ";
  cin >> tamano;

  // Validar la entrada del usuario
  if (tamano < 1 || tamano > 20) {
    cout << "Tamaño inválido. El tamano debe estar entre 1 y 20." << endl;
    return 1; // Indica un error
  }

  // Dibujar el cuadrado hueco
  for (int i = 1; i <= tamano; i++) {
    for (int j = 1; j <= tamano; j++) {
      if (i == 1 || i == tamano || j == 1 || j == tamano) {
        cout << "*";
      } else {
        cout << " ";
      }
    }
    cout << endl;
  }

  return 0;
}

