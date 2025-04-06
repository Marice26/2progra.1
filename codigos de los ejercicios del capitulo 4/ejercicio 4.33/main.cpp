#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double a, b, c;

  cout << "Introduzca las tres longitudes (separadas por espacios): ";
  cin >> a >> b >> c;

  // Ordenamos las longitudes para simplificar la lógica
  if (a > b) swap(a, b);
  if (b > c) swap(b, c);
  if (a > b) swap(a, b);


  if (a <= 0 || b <= 0 || c <= 0) {
    cout << "Las longitudes deben ser positivas." << endl;
    return 1; // Indica un error
  }

  // Teorema de Pitágoras:  a² + b² = c²  (donde c es la hipotenusa)
  if (abs(pow(a, 2) + pow(b, 2) - pow(c, 2)) < 1e-6) { // Usamos una pequeña tolerancia para comparar números de punto flotante
    cout << "Las longitudes forman un triangulo rectángulo." << endl;
  } else {
    cout << "Las longitudes NO forman un triangulo rectángulo." << endl;
  }

  return 0;
}

