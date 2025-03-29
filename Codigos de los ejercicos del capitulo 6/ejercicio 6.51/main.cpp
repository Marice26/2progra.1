#include <iostream>
#include <algorithm>

using namespace std;

// Plantilla de función para encontrar el mínimo de dos valores
template <typename T>
T minimo(T a, T b) {
  return min(a, b); //Usamos la función estándar min para mayor eficiencia y claridad
}


int main() {
  int entero1 = 10, entero2 = 5;
  char caracter1 = 'A', caracter2 = 'B';
  double flotante1 = 3.14, flotante2 = 2.71;

  cout << "El minimo de " << entero1 << " y " << entero2 << " es: " << minimo(entero1, entero2) << endl;
  cout << "El minimo de " << caracter1 << " y " << caracter2 << " es: " << minimo(caracter1, caracter2) << endl;
  cout << "El minimo de " << flotante1 << " y " << flotante2 << " es: " << minimo(flotante1, flotante2) << endl;

  return 0;
}
