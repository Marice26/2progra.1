#include <iostream>
#include <string>
#include <algorithm> //Para usar reverse

using namespace std;

int binarioADecimal(long long n) {
  string binario = to_string(n);
  reverse(binario.begin(), binario.end()); //Invertimos la cadena para procesar de derecha a izquierda
  int decimal = 0;
  int potencia = 1;

  for (char digito : binario) {
    if (digito == '1') {
      decimal += potencia;
    } else if (digito != '0') {
      return -1; // Error: el número no es binario
    }
    potencia *= 2;
  }
  return decimal;
}

int main() {
  long long numeroBinario;

  cout << "Introduzca un numero binario: ";
  cin >> numeroBinario;

  int decimal = binarioADecimal(numeroBinario);

  if (decimal == -1) {
    cout << "Entrada inválida. El numero debe contener solo ceros y unos." << endl;
  } else {
    cout << "El equivalente decimal es: " << decimal << endl;
  }

  return 0;
}
