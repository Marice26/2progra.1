#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Función para generar un número aleatorio entre 1 y 6
int tirarDado() {
  return rand() % 6 + 1;
}

int main() {
  // Inicializar el generador de números aleatorios
  srand(time(0));

  int saldo = 100; // Saldo inicial
  int apuesta;
  int punto = 0;
  bool jugando = true;

  cout << "Bienvenido al juego de Craps!\n";
  cout << "Tu saldo inicial es: " << saldo << endl;

  while (jugando) {
    // Obtener la apuesta del jugador
    do {
      cout << "Introduce tu apuesta (saldo: " << saldo << "): ";
      cin >> apuesta;
      if (apuesta <= 0 || apuesta > saldo) {
        cout << "Apuesta invalida. Intenta de nuevo.\n";
      }
    } while (apuesta <= 0 || apuesta > saldo);

    int dado1 = tirarDado();
    int dado2 = tirarDado();
    int sumaDados = dado1 + dado2;

    cout << "Has tirado: " << dado1 << " + " << dado2 << " = " << sumaDados << endl;

    if (punto == 0) { // Primera tirada
      if (sumaDados == 7 || sumaDados == 11) {
        cout << "¡Ganaste!\n";
        saldo += apuesta;
      } else if (sumaDados == 2 || sumaDados == 3 || sumaDados == 12) {
        cout << "¡Perdiste!\n";
        saldo -= apuesta;
      } else {
        punto = sumaDados;
        cout << "El punto es: " << punto << endl;
      }
    } else { // Tiras subsecuentes
      if (sumaDados == punto) {
        cout << "¡Ganaste!\n";
        saldo += apuesta;
        punto = 0; // Reiniciar el punto
      } else if (sumaDados == 7) {
        cout << "¡Perdiste!\n";
        saldo -= apuesta;
        punto = 0; // Reiniciar el punto
      } else {
        cout << "Tira de nuevo.\n";
      }
    }

    cout << "Tu saldo actual es: " << saldo << endl;

    if (saldo <= 0) {
      cout << "Te has quedado sin saldo. El juego ha terminado.\n";
      jugando = false;
    } else {
      char continuar;
      cout << "¿Deseas continuar? (s/n): ";
      cin >> continuar;
      if (continuar != 's') {
        jugando = false;
      }
    }
  }

  cout << "Gracias por jugar!\n";
  return 0;
}

