#include <iostream>

enum class TipoCuenta { AHORROS, CHEQUES, INVERSION };

int main() {
  // Uso de la enumeración con alcance
  TipoCuenta tipo = TipoCuenta::AHORROS;

  if (tipo == TipoCuenta::AHORROS) {
    std::cout << "El tipo de cuenta es AHORROS" << std::endl;
  }

  //Para imprimir el valor entero subyacente (opcional):
  std::cout << "El valor entero de TipoCuenta::CHEQUES es: " << static_cast<int>(TipoCuenta::CHEQUES) << std::endl;

  return 0;
}
