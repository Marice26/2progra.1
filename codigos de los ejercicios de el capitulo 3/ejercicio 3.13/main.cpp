#include <iostream>
#include <iomanip>
#include "Factura.h"
using namespace std;

int main()
{
    Factura factura1("12345", "Tornillo", 10, 25);
    Factura factura2("67890", "Tuerca", -5, 10); //Prueba con cantidad negativa

    cout << fixed << setprecision(2); //Para mostrar dos decimales en el monto

    cout << "Factura 1:" << endl;
    cout << "Numero de pieza: " << factura1.obtenerNumeroPieza() << endl;
    cout << "Descripcion: " << factura1.obtenerDescripcion() << endl;
    cout << "Cantidad: " << factura1.obtenerCantidad() << endl;
    cout << "Precio por articulo: " << factura1.obtenerPrecioPorArticulo() << endl;
    cout << "Monto de la factura: " << factura1.obtenerMontoFactura() << endl << endl;

    cout << "Factura 2:" << endl;
    cout << "Numero de pieza: " << factura2.obtenerNumeroPieza() << endl;
    cout << "Descripcion: " << factura2.obtenerDescripcion() << endl;
    cout << "Cantidad: " << factura2.obtenerCantidad() << endl;
    cout << "Precio por articulo: " << factura2.obtenerPrecioPorArticulo() << endl;
    cout << "Monto de la factura: " << factura2.obtenerMontoFactura() << endl;

    return 0;
}
