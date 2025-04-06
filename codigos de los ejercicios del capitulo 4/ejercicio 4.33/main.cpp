#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double a, b, c;

  cout << "Introduzca las tres longitudes (separadas por espacios): ";
  cin >> a >> b >> c;

  // Ordenamos las longitudes para simplificar la l�gica
  if (a > b) swap(a, b);
  if (b > c) swap(b, c);
  if (a > b) swap(a, b);


  if (a <= 0 || b <= 0 || c <= 0) {
    cout << "Las longitudes deben ser positivas." << endl;
    return 1; // Indica un error
  }

  // Teorema de Pit�goras:  a� + b� = c�  (donde c es la hipotenusa)
  if (abs(pow(a, 2) + pow(b, 2) - pow(c, 2)) < 1e-6) { // Usamos una peque�a tolerancia para comparar n�meros de punto flotante
    cout << "Las longitudes forman un triangulo rect�ngulo." << endl;
  } else {
    cout << "Las longitudes NO forman un triangulo rect�ngulo." << endl;
  }

  return 0;
}

