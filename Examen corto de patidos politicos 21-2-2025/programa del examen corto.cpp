#include <iostream>
#include <iomanip>

using namespace std;

// Función para ingreso del funcionamiento del codigo
void ingresarNotas(int notas[5][4]) {// se establece el numero de partido y el bumero de rondas que se va utilizar
    for (int i = 0; i < 5; i++) {
        cout << "Ingrese las notas del partido " << i + 1 << " en las 4 rondas:\n";
        for (int j = 0; j < 4; j++) {
            cout << "Ronda " << j + 1 << ": ";
            cin >> notas[i][j];
        }
    }
}

// Función para calcular los votos finales de los partidos
void calcularVotosFinales(int notas[5][4], int votosFinales[5]) {
    for (int i = 0; i < 5; i++) {//la acumulacion delos votantes que se establecen el codigo requerido
        votosFinales[i] = 0;
        for (int j = 0; j < 4; j++) {
            votosFinales[i] += notas[i][j];
        }
    }
}


// Función para calcular los porcentajes de cada partido
void calcularPorcentajes(int votosFinales[5], float porcentajes[5]) {
    int totalVotos = 0;
    for (int i = 0; i < 5; i++) {
        totalVotos += votosFinales[i];// se establece en los totales de los votos de los partidos
    }
    for (int i = 0; i < 5; i++) {
        porcentajes[i] = (float)votosFinales[i] / totalVotos * 100;
    }
}
int main() {
    int notas[5][4];
    int votosFinales[5];
    float porcentajes[5];

    // las notas de los partidos
    ingresarNotas(notas);

    //los votos finales de los partidos
    calcularVotosFinales(notas, votosFinales);

    // los porcentajes de los partidos finales
    calcularPorcentajes(votosFinales, porcentajes);

    // Mostrar los resultados en la tabla para qu el usuario lo mire mas ordenado
    cout << "\nResultados:\n";
    cout << "--------------------------------------------------\n";
    cout << "Partido | Votos Finales | Porcentaje\n";
    cout << "--------------------------------------------------\n";
    for (int i = 0; i < 5; i++) {
        cout << "  " << i + 1 << "      | " << votosFinales[i] << "           | " << fixed << setprecision(2) << porcentajes[i] << "%\n";
    }
    cout << "--------------------------------------------------\n";

    return 0;
}



