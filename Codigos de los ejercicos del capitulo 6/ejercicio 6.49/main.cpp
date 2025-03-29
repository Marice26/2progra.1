#include <iostream>

using namespace std;

// Función que triplica un valor por valor
int triplicarPorValor(int cuenta) {
  return cuenta * 3;
}

// Función que triplica un valor por referencia
void triplicarPorReferencia(int& cuenta) {
  cuenta *= 3;
}

int main() {
  int cuenta = 10;

  // Usando la función por valor
  int cuentaTriplicadaValor = triplicarPorValor(cuenta);
  cout << "Valor original: " << cuenta << endl;
  cout << "Valor triplicado por valor: " << cuentaTriplicadaValor << endl;

  // Usando la función por referencia
  triplicarPorReferencia(cuenta);
  cout << "Valor original despues de usar la función por referencia: " << cuenta << endl;

  return 0;
}
