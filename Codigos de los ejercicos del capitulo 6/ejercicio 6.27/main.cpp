#include <iostream>
#include <algorithm>

double encontrarMinimo(double num1, double num2, double num3) {
  return std::min({num1, num2, num3});
}

int main() {
  double num1, num2, num3;

  std::cout << "Ingrese tres numeros de punto flotante: ";
  std::cin >> num1 >> num2 >> num3;

  double minimo = encontrarMinimo(num1, num2, num3);

  std::cout << "El numero mas pequeno es: " << minimo << std::endl;

  return 0;
}
