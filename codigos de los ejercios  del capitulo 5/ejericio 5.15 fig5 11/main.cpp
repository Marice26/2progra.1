#include <iostream>
#include <string>
#include <vector>
#include <limits> // Para numeric_limits

using namespace std;

int main() {
  int numCalificaciones;
  double sumaPuntos = 0;

  cout << "Ingrese el numero de calificaciones: ";
  cin >> numCalificaciones;

  // Validación de entrada para el número de calificaciones
  while (cin.fail() || numCalificaciones <= 0) {
    cout << "Entrada invalida. Ingrese un numero entero positivo: ";
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin >> numCalificaciones;
  }


  vector<string> calificaciones(numCalificaciones);
  for (int i = 0; i < numCalificaciones; ++i) {
    cout << "Ingrese la calificacion " << i + 1 << " (A, B, C, D, F): ";
    cin >> calificaciones[i];

    // Validación de entrada para cada calificación
    while (calificaciones[i] != "A" && calificaciones[i] != "B" && calificaciones[i] != "C" && calificaciones[i] != "D" && calificaciones[i] != "F") {
      cout << "Calificación invalida. Ingrese A, B, C, D o F: ";
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      cin >> calificaciones[i];
    }
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
    } else { // calificacion == "F"
      sumaPuntos += 0;
    }
  }

  double promedio = sumaPuntos / numCalificaciones;
  cout << "El promedio de puntos es: " << promedio << endl;

  return 0;
}
