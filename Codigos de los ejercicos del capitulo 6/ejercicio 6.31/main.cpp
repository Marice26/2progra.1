#include <iostream>

int mcd(int a, int b) {
  while (b != 0) {
    int temp = b;
    b = a % b;
    a = temp;
  }
  return a;
}

int main() {
  int num1, num2;

  std::cout << "Ingrese dos enteros: ";
  std::cin >> num1 >> num2;

  int maximoComunDivisor = mcd(num1, num2);

  std::cout << "El maximo comun divisor de " << num1 << " y " << num2 << " es: " << maximoComunDivisor << std::endl;

  return 0;
}


