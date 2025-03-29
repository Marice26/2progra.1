#include <iostream>

void cuadrado(int lado, char caracterRelleno) {
  for (int i = 0; i < lado; i++) {
    for (int j = 0; j < lado; j++) {
      std::cout << caracterRelleno;
    }
    std::cout << std::endl;
  }
}

int main() {
  int lado;
  char caracterRelleno;

  std::cout << "Ingrese el lado del cuadrado: ";

  std::cin >> lado;

  std::cout << "Ingrese el caracter de relleno: ";
  std::cin >> caracterRelleno;

  cuadrado(lado, caracterRelleno);

  return 0;
}
