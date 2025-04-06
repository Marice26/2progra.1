#include <iostream>

using namespace std;

int main() {
  unsigned int cuenta;
  bool continuar = true;

  for (cuenta = 1; cuenta <= 10 && continuar; ++cuenta) {
    if (cuenta == 5) {
      continuar = false;
    } else {
      cout << cuenta << " ";
    }
  }
  cout << "\nSalio del ciclo en cuenta = " << cuenta << endl;
  return 0;
}

