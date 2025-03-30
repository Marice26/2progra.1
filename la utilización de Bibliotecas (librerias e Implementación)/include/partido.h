#ifndef PARTIDO_H
#define PARTIDO_H


#include <string>
using namespace std;

class Partido {
private:
    string nombre;
    int votos[5];
public:
    Partido(string nombre);
    void agregarVoto(int ronda);
    int obtenerTotalVotos() const;
    string obtenerNombre() const;
    int obtenerVotosPorRonda(int ronda) const;
    void reiniciarVotos();
};


#endif // PARTIDO_H
