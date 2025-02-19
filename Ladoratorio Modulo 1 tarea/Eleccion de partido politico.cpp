#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main() {
    // Definición de variables y matrices
    string partidos[3];
    int votos[3][5] = { {0, 0, 0, 0, 0}, {0, 0, 0, 0, 0}, {0, 0, 0, 0, 0} }; // Votos por partido y ronda
    int num_votantes = 50;
    int num_rondas = 5;

    // Ciclo para repetir la elección
    while (true) {
        // Ingreso de datos de los partidos
        for (int i = 0; i < 3; i++) {
            cout << "Ingrese el nombre del partido " << (i + 1) << ": ";
            getline(cin, partidos[i]);
        }

        // Generación de votos aleatorios
        srand(time(0)); // Inicializar la semilla para números aleatorios
        for (int i = 0; i < num_votantes; i++) {
            for (int j = 0; j < num_rondas; j++) {
                int partido_votado = rand() % 3; // Genera un número aleatorio entre 0 y 2 (3 partidos)
                votos[partido_votado][j]++; // Incrementa el voto para el partido elegido
            }
        }

        // Imprimir la tabla de resultados
        cout << "\nTabla de Resultados:\n";
        cout << "--------------------------------------------------\n";
        cout << "Partido | Ronda 1 | Ronda 2 | Ronda 3 | Ronda 4 | Ronda 5 | Total\n";
        cout << "--------------------------------------------------\n";
        for (int i = 0; i < 3; i++) {
            cout << left << setw(10) << partidos[i] << " | "; // Ajustar el ancho del nombre del partido
            int total_votos = 0;
            for (int j = 0; j < num_rondas; j++) {
                cout << right << setw(8) << votos[i][j] << " | "; // Ajustar el ancho de los votos
                total_votos += votos[i][j];
            }
            cout << right << setw(8) << total_votos << endl; // Ajustar el ancho del total de votos
        }
        cout << "--------------------------------------------------\n";

        // Determinar el ganador y el partido con menos votos
        int ganador = 0;
        int menor_votos = num_votantes * num_rondas; // Inicializar con el máximo posible
        int partido_menor_votos = 0;

        for (int i = 0; i < 3; i++) {
            int total_votos = 0;
            for (int j = 0; j < num_rondas; j++) {
                total_votos += votos[i][j];
            }
            if (total_votos > votos[ganador][0]) {
                ganador = i;
            }
            if (total_votos < menor_votos) {
                menor_votos = total_votos;
                partido_menor_votos = i;
            }
        }

        // Imprimir los resultados finales
        cout << "\nResultados Finales:\n";
        cout << "-----------------------------------------\n";
        cout << "Partido ganador: " << partidos[ganador] << endl;
        cout << "Partido con menos votos: " << partidos[partido_menor_votos] << endl;

        // Preguntar si desea realizar otra elección
        char otra_eleccion;
        cout << "\n¿Desea realizar otra elección? (s/n): ";
        cin >> otra_eleccion;
        if (otra_eleccion == 's') {
            // Reiniciar los votos para un nuevo cálculo
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 5; j++) {
                    votos[i][j] = 0; // Reiniciar los votos
                }
            }
        } else {
            break; // Salir del ciclo
        }
    }

    return 0;
}
