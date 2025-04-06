#include <iostream>

using namespace std;

int main() {
  long long producto = 1; // Usamos long long para evitar posibles desbordamientos

  for (int i = 1; i <= 15; i += 2) {
    producto *= i;
  }

  cout << "El producto de los enteros impares del 1 al 15 es: " << producto << endl;
  return 0;
}
