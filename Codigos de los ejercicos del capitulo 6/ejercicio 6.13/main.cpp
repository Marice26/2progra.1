#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double x;

  cout << "Introduce un numero: ";
  cin >> x;

  double y = floor(x + 0.5);

  cout << "Numero original: " << x << endl;
  cout << "Numero redondeado: " << y << endl;

  return 0;
}
