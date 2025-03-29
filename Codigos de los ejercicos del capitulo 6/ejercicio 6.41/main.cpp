#include <iostream>

int mcd(int x, int y) {
  if (y == 0) {
    return x;
  } else {
    return mcd(y, x % y);
  }
}

int main() {
  int x, y;
  std::cout << "Ingrese dos enteros (x > y): ";
  std::cin >> x >> y;
  if (x <= y) {
    std::cerr << "Error: x debe ser mayor que y." << std::endl;
    return 1; // Indica un error
  }
  std::cout << "El maximo comun divisor de " << x << " y " << y << " es: " << mcd(x, y) << std::endl;
  return 0;
}
