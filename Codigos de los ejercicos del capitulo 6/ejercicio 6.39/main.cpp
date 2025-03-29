#include <iostream>
#include <stack>
#include <vector>

using namespace std;

void torresDeHanoiIterativo(int n, char origen, char destino, char auxiliar) {
    stack<pair<int, char>> origenStack;
    stack<pair<int, char>> destinoStack;
    stack<pair<int, char>> auxiliarStack;

    // Inicializa la pila de origen
    for (int i = n; i >= 1; --i) {
        origenStack.push({i, origen});
    }

    // Algoritmo iterativo
    char origenActual = origen;
    char destinoActual = destino;
    char auxiliarActual = auxiliar;
    int discoActual;

    while (!origenStack.empty()) {
        if (origenStack.size() > 0) {
            discoActual = origenStack.top().first;
            origenStack.pop();
            cout << "Mover disco " << discoActual << " de " << origenActual << " a " << destinoActual << endl;
            destinoStack.push({discoActual, destinoActual});
        } else if (auxiliarStack.size() > 0 && auxiliarStack.top().first < destinoStack.top().first) {
            discoActual = auxiliarStack.top().first;
            auxiliarStack.pop();
            cout << "Mover disco " << discoActual << " de " << auxiliarActual << " a " << destinoActual << endl;
            destinoStack.push({discoActual, destinoActual});
        } else {
            discoActual = destinoStack.top().first;
            destinoStack.pop();
            cout << "Mover disco " << discoActual << " de " << destinoActual << " a " << auxiliarActual << endl;
            auxiliarStack.push({discoActual, auxiliarActual});
            swap(destinoActual, auxiliarActual);
        }
    }
}

int main() {
    int numDiscos;
    cout << "Ingrese el numero de discos: ";
    cin >> numDiscos;
    torresDeHanoiIterativo(numDiscos, 'A', 'C', 'B');
    return 0;
}
