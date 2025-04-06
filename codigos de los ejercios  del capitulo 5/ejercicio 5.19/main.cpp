#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  double pi = 0.0;
  double termino;
  int signo = 1;

  cout << "Termino" << setw(15) << "Aproximacion de pi" << endl;
  cout << "-------" << setw(15) << "------------------" << endl;


  for (int i = 1; i <= 1000; ++i) {
    termino = 4.0 / (2.0 * i - 1.0);
    pi += signo * termino;
    cout << setw(7) << i << setw(15) << fixed << setprecision(10) << pi << endl;
    signo *= -1; // Cambia el signo para el siguiente término
  }

  return 0;
}

