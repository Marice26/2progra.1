#include <iostream>

using namespace std;

int main() {
  int filas = 7; // Número de filas del rombo (debe ser impar)

  // Mitad superior del rombo
  for (int i = 1; i <= filas / 2 + 1; ++i) {
    for (int j = 1; j <= filas / 2 + 1 - i; ++j) {
      cout << " ";
    }
    for (int k = 1; k <= 2 * i - 1; ++k) {
      cout << "*";
    }
    cout << endl;
  }

  // Mitad inferior del rombo
  for (int i = filas / 2; i >= 1; --i) {
    for (int j = 1; j <= filas / 2 + 1 - i; ++j) {
      cout << " ";
    }
    for (int k = 1; k <= 2 * i - 1; ++k) {
      cout << "*";
    }
    cout << endl;
  }

  return 0;
}

