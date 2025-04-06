#include <iostream>

using namespace std;

int main() {
  long long potencia = 1; // Iniciamos en 2^0 = 1

  while (true) { // Ciclo infinito
    cout << potencia << " ";
    potencia *= 2;
  }

  return 0; // Esta línea nunca se ejecuta
}
