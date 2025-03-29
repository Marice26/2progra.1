#include <iostream>

unsigned long fibonacciIterativo(unsigned long numero) {
  if (numero <= 1) {
    return numero;
  }

  unsigned long a = 0, b = 1, temp;
  for (unsigned long i = 2; i <= numero; ++i) {
    temp = a + b;
    a = b;
    b = temp;
  }
  return b;
}

int main() {
  for (int i = 0; i <= 10; ++i) {
    std::cout << "Fibonacci(" << i << ") = " << fibonacciIterativo(i) << std::endl;
  }
  return 0;
}
