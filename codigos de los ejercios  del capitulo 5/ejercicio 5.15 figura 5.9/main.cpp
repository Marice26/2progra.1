#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  int numCalificaciones;
  double sumaPuntos = 0;

  cout << "Ingrese el numero de calificaciones: ";
  cin >> numCalificaciones;

  vector<string> calificaciones(numCalificaciones);
  for (int i = 0; i < numCalificaciones; ++i) {
    cout << "Ingrese la calificación " << i + 1 << " (A, B, C, D, F): ";
    cin >> calificaciones[i];
  }

  for (const string& calificacion : calificaciones) {
    if (calificacion == "A") {
      sumaPuntos += 4;
    } else if (calificacion == "B") {
      sumaPuntos += 3;
    } else if (calificacion == "C") {
      sumaPuntos += 2;
    } else if (calificacion == "D") {
      sumaPuntos += 1;
    } else if (calificacion == "F") {
      sumaPuntos += 0;
    } else {
      cout << "Calificación invalida: " << calificacion << endl;
      return 1; // Indica un error
    }
  }

  double promedio = sumaPuntos / numCalificaciones;
  cout << "El promedio de puntos es: " << promedio << endl;

  return 0;
}
