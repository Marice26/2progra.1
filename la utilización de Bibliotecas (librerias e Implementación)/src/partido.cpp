#include "partido.h"

Partido::Partido(string nombre) : nombre(nombre) {
    reiniciarVotos();
}

void Partido::agregarVoto(int ronda) {
    if (ronda >= 0 && ronda < 5) votos[ronda]++;
}

int Partido::obtenerTotalVotos() const {
    int total = 0;
    for (int i = 0; i < 5; i++) total += votos[i];
    return total;
}

string Partido::obtenerNombre() const {
    return nombre;
}

int Partido::obtenerVotosPorRonda(int ronda) const {
    return (ronda >= 0 && ronda < 5) ? votos[ronda] : 0;
}

void Partido::reiniciarVotos() {
    for (int i = 0; i < 5; i++) votos[i] = 0;
}
