#ifndef ELECCION_H
#define ELECCION_H

#include "Partido.h"
#include <vector>
using namespace std;

class Eleccion {
private:
    vector<Partido> partidos;
    int numVotantes;
    int numRondas;
public:
    Eleccion(int numVotantes, int numRondas);
    void ingresarPartidos();
    void realizarVotacion();
    void mostrarResultados() const;
    void reiniciarEleccion();
};


#endif // ELECCION_H
