#include <iostream>

using namespace std;

int main() {
  int codigoPago;
  double salarioSemanal = 0;

  cout << "Ingrese el codigo de pago del empleado (1, 2, 3 o 4): ";
  cin >> codigoPago;

  switch (codigoPago) {
    case 1: // Gerente
      cout << "Ingrese el salario semanal del gerente: ";
      cin >> salarioSemanal;
      break;
    case 2: // Trabajador por hora
      {
        double sueldoPorHora, horasTrabajadas;
        cout << "Ingrese el sueldo por hora: ";
        cin >> sueldoPorHora;
        cout << "Ingrese las horas trabajadas: ";
        cin >> horasTrabajadas;
        if (horasTrabajadas <= 40) {
          salarioSemanal = horasTrabajadas * sueldoPorHora;
        } else {
          salarioSemanal = 40 * sueldoPorHora + (horasTrabajadas - 40) * sueldoPorHora * 1.5;
        }
      }
      break;
    case 3: // Empleado por comisión
      {
        double ventasTotales;
        cout << "Ingrese las ventas totales: ";
        cin >> ventasTotales;
        salarioSemanal = 250 + 0.07 * ventasTotales;
      }
      break;
    case 4: // Trabajador por pieza
      {
        double piezasProducidas, pagoPorPieza;
        cout << "Ingrese el numero de piezas producidas: ";
        cin >> piezasProducidas;
        cout << "Ingrese el pago por pieza: ";
        cin >> pagoPorPieza;
        salarioSemanal = piezasProducidas * pagoPorPieza;
      }
      break;
    default:
      cout << "Código de pago invalido." << endl;
      return 1; // Indica un error
  }

  cout << "El salario semanal del empleado es: " << salarioSemanal << endl;
  return 0;
}

