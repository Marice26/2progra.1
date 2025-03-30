#include "Eleccion.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

Eleccion::Eleccion(int numVotantes, int numRondas) : numVotantes(numVotantes), numRondas(numRondas) {}

void Eleccion::ingresarPartidos() {
    for (int i = 0; i < 3; i++) {
        string nombre;
        cout << "Ingrese el nombre del partido " << (i + 1) << ": ";
        getline(cin, nombre);
        partidos.push_back(Partido(nombre));
    }
}

void Eleccion::realizarVotacion() {
    srand(time(0));
    for (int i = 0; i < numVotantes; i++) {
        for (int j = 0; j < numRondas; j++) {
            int partidoVotado = rand() % 3;
            partidos[partidoVotado].agregarVoto(j);
        }
    }
}

void Eleccion::mostrarResultados() const {
    cout << "\nTabla de Resultados:\n";
    cout << "-----------------------------------------------------------------------------------\n";
    cout << "Partido    | Ronda 1  | Ronda 2  | Ronda 3  | Ronda 4  | Ronda 5  | Total\n";
    cout << "-----------------------------------------------------------------------------------\n";

    int ganador = 0, menorVotos = numVotantes * numRondas, partidoMenorVotos = 0;
    for (size_t i = 0; i < partidos.size(); i++) {
        cout << left << setw(10) << partidos[i].obtenerNombre() << " | ";
        int totalVotos = partidos[i].obtenerTotalVotos();
        for (int j = 0; j < numRondas; j++) {
            cout << right << setw(8) << partidos[i].obtenerVotosPorRonda(j) << " | ";
        }
        cout << right << setw(8) << totalVotos << endl;

        if (totalVotos > partidos[ganador].obtenerTotalVotos()) ganador = i;
        if (totalVotos < menorVotos) {
            menorVotos = totalVotos;
            partidoMenorVotos = i;
        }
    }
    cout << "------------------------------------------------------------------------------------\n";
    cout << "\nPartido ganador: " << partidos[ganador].obtenerNombre() << endl;
    cout << "Partido con menos votos: " << partidos[partidoMenorVotos].obtenerNombre() << endl;
}

void Eleccion::reiniciarEleccion() {
    for (auto& partido : partidos) {
        partido.reiniciarVotos();
    }
}

