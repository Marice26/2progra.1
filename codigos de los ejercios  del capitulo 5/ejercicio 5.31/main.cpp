#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  // Categorías de gastos y sus respectivos importes
  vector<pair<string, double>> gastos;
  gastos.push_back({"Alojamiento", 0.0});
  gastos.push_back({"Comida", 0.0});
  gastos.push_back({"Ropa", 0.0});
  gastos.push_back({"Transporte", 0.0});
  gastos.push_back({"Educación", 0.0});
  gastos.push_back({"Servicios medicos", 0.0});
  gastos.push_back({"Vacaciones", 0.0});


  // Solicitar al usuario que introduzca sus gastos
  for (auto& gasto : gastos) {
    cout << "Introduzca sus gastos en " << gasto.first << ": ";
    cin >> gasto.second;
  }

  // Calcular el impuesto FairTax (asumiendo una tasa del 23%)
  double totalGastos = 0;
  for (const auto& gasto : gastos) {
    totalGastos += gasto.second;
  }
  double impuestoFairTax = totalGastos * 0.23;

  // Imprimir el impuesto estimado
  cout << "\nImpuesto FairTax estimado: " << impuestoFairTax << endl;

  return 0;
}
