#ifndef FACTURA_H
#define FACTURA_H

#include <string>
class Factura
{
  public:
    Factura(std::string numeroPieza, std::string descripcion, int cantidad, int precioPorArticulo);
    void establecerNumeroPieza(std::string numeroPieza);
    std::string obtenerNumeroPieza() const;
    void establecerDescripcion(std::string descripcion);
    std::string obtenerDescripcion() const;
    void establecerCantidad(int cantidad);
    int obtenerCantidad() const;
    void establecerPrecioPorArticulo(int precioPorArticulo);
    int obtenerPrecioPorArticulo() const;
    double obtenerMontoFactura() const;

private:
    std::string numeroPieza;
    std::string descripcion;
    int cantidad;
    int precioPorArticulo;

};

#endif // FACTURA_H
