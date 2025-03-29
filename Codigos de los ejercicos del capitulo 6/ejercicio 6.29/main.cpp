#include <iostream>
#include <cmath>

bool esPrimo(int n) {
  if (n <= 1) return false;
  if (n <= 3) return true;
  if (n % 2 == 0 || n % 3 == 0) return false;

  for (int i = 5; i * i <= n; i = i + 6)
    if (n % i == 0 || n % (i + 2) == 0)
      return false;

  return true;
}

int main() {
  int contador = 0;
  std::cout << "Numeros primos entre 2 y 10000:" << std::endl;
  for (int i = 2; i <= 10000; i++) {
    if (esPrimo(i)) {
      std::cout << i << " ";
      contador++;
    }
  }
  std::cout << std::endl << "Cantidad de numeros primos encontrados: " << contador << std::endl;
  return 0;
}

