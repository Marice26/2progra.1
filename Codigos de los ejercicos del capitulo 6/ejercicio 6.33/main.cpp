#include <iostream>
#include <cstdlib>
#include <ctime>

// Función para simular el lanzamiento de una moneda
int tirar() {
  return rand() % 2; // 0 o 1 con igual probabilidad
}

int main() {
  // Inicializa el generador de números aleatorios
  std::srand(std::time(0));

  int caras = 0;
  int cruces = 0;

  for (int i = 0; i < 100; i++) {
    if (tirar() == 0) {
      caras++;
    } else {
      cruces++;
    }
  }

  std::cout << "Resultados de 100 lanzamientos de moneda:" << std::endl;
  std::cout << "Caras: " << caras << std::endl;
  std::cout << "Cruces: " << cruces << std::endl;

  return 0;
}


