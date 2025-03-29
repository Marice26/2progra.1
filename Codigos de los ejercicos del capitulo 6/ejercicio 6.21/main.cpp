#include <iostream>

// Función para determinar si un entero es par
bool esPar(int numero) {
  return (numero % 2 == 0);
}

int main() {
  int numero;

  std::cout << "Ingrese una serie de enteros (ingrese un numero negativo para terminar):" << std::endl;

  while (true) {
    std::cin >> numero;
    if (numero < 0) {
      break; // Sale del bucle si el número es negativo
    }
    if (esPar(numero)) {
      std::cout << numero << " es par." << std::endl;
    } else {
      std::cout << numero << " es impar." << std::endl;
    }
  }

  return 0;
}


