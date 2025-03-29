#include <iostream>

int segundosTranscurridos(int horas, int minutos, int segundos) {
  return horas * 3600 + minutos * 60 + segundos;
}

int main() {
  int hora1_horas, hora1_minutos, hora1_segundos;
  int hora2_horas, hora2_minutos, hora2_segundos;

  std::cout << "Ingrese la primera hora (horas minutos segundos)(no hay necesidad de poner comas): ";
  std::cin >> hora1_horas >> hora1_minutos >> hora1_segundos;

  std::cout << "Ingrese la segunda hora (horas minutos segundos): ";
  std::cin >> hora2_horas >> hora2_minutos >> hora2_segundos;

  int segundos1 = segundosTranscurridos(hora1_horas, hora1_minutos, hora1_segundos);
  int segundos2 = segundosTranscurridos(hora2_horas, hora2_minutos, hora2_segundos);

  int diferenciaSegundos = segundos2 - segundos1;

  if (diferenciaSegundos < 0) {
    diferenciaSegundos += 12 * 3600; //Ajusta para ciclos de 12 horas
  }

  std::cout << "La diferencia de tiempo entre las dos horas es: " << diferenciaSegundos << " segundos." << std::endl;

  return 0;
}


