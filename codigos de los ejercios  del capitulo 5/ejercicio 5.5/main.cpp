#include <iostream>

using namespace std;

int main() {
  int numValores;
  cout << "Introduzca el número de valores a sumar: ";
  cin >> numValores;

  if (numValores <= 0) {
    cout << "El número de valores debe ser positivo." << endl;
    return 1; // Indica un error
  }

  long long suma = 0; // Usamos long long para evitar posibles desbordamientos
  for (int i = 0; i < numValores; ++i) {
    int valor;
    cout << "Introduzca el valor " << i + 1 << ": ";
    cin >> valor;
    suma += valor;
  }

  cout << "La suma de los valores es: " << suma << endl;
  return 0;
}

