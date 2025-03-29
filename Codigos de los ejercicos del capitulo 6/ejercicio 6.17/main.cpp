#include <iostream>
#include <random>

int main() {
  std::random_device rd;  // Obtiene una semilla del sistema operativo
  std::mt19937 gen(rd()); // Inicializa un generador de números aleatorios

  // a) 1 ≤ n ≤ 2
  std::uniform_int_distribution<> distrib_a(1, 2);
  int n_a = distrib_a(gen);
  std::cout << "a) n = " << n_a << std::endl;

  // b) 1 ≤ n ≤ 100
  std::uniform_int_distribution<> distrib_b(1, 100);
  int n_b = distrib_b(gen);
  std::cout << "b) n = " << n_b << std::endl;

  // c) 0 ≤ n ≤ 9
  std::uniform_int_distribution<> distrib_c(0, 9);
  int n_c = distrib_c(gen);
  std::cout << "c) n = " << n_c << std::endl;

  // d) 1000 ≤ n ≤ 1112
  std::uniform_int_distribution<> distrib_d(1000, 1112);
  int n_d = distrib_d(gen);
  std::cout << "d) n = " << n_d << std::endl;

  // e) -1 ≤ n ≤ 1
  std::uniform_int_distribution<> distrib_e(-1, 1);
  int n_e = distrib_e(gen);
  std::cout << "e) n = " << n_e << std::endl;

  // f) -3 ≤ n ≤ 11
  std::uniform_int_distribution<> distrib_f(-3, 11);
  int n_f = distrib_f(gen);
  std::cout << "f) n = " << n_f << std::endl;

  return 0;
}



