#include <iostream>
#include <cmath>

// Define la funci�n hipotenusa
double hipotenusa(double lado1, double lado2) {
  return std::sqrt(lado1 * lado1 + lado2 * lado2);
}

int main() {
  // Datos de los tri�ngulos
  double lado1_triangulo1 = 3.0;
  double lado2_triangulo1 = 4.0;
  double lado1_triangulo2 = 5.0;
  double lado2_triangulo2 = 12.0;
  double lado1_triangulo3 = 8.0;
  double lado2_triangulo3 = 15.0;

  // Calcula e imprime la hipotenusa para cada tri�ngulo
  std::cout << "Triangulo 1: Hipotenusa = " << hipotenusa(lado1_triangulo1, lado2_triangulo1) << std::endl;
  std::cout << "Triangulo 2: Hipotenusa = " << hipotenusa(lado1_triangulo2, lado2_triangulo2) << std::endl;
  std::cout << "Triangulo 3: Hipotenusa = " << hipotenusa(lado1_triangulo3, lado2_triangulo3) << std::endl;

  return 0;
}

