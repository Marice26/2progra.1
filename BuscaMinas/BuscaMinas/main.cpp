#include <iostream>
#include <unistd.h>
#include "Juego.h"
#include "Config.h"
#include <cstdlib>

using namespace std;

int main()
{
    // Solicitar el nombre del jugador al inicio del juego
    string nombrejugador;
    cout << "Ingrese su Nombre: ";
    cin >> nombrejugador;

    // Definir las configuraciones predeterminadas del tablero
    const int FILASTABLERO = 5;       // Número de filas en el tablero
    const int COLUMNASTABLERO = 5;    // Número de columnas en el tablero
    const int MINASENTABLERO = 3;     // Número de minas en el tablero
    const bool MODODESARROLLADOR = true;  // Activar el modo desarrollador
    const int VIDASTABLERO = 3;       // Número de vidas del jugador

    // Crear un objeto 'Config' con las configuraciones definidas
    Config configuracionJuego(FILASTABLERO, COLUMNASTABLERO, MINASENTABLERO, MODODESARROLLADOR, VIDASTABLERO);
    
    // Crear un objeto 'Juego' pasando el tablero configurado y las vidas
    Juego juego(Tablero(configuracionJuego.getfilasTablero(), configuracionJuego.getcolumnasTablero(), configuracionJuego.getmodoDesarrolladorTablero()),
                configuracionJuego.getminasTablero(), configuracionJuego.getvidasTablero());

    // Inicializar la semilla del generador de números aleatorios
    srand(getpid());

    // Variable para controlar el ciclo del menú
    int opciones;
    bool repetir = true;
    
    // Bucle principal del menú
    do
    {
        // Mostrar el marcador de victorias y derrotas
        juego.mostrarMarcador();

        // Limpiar la pantalla (dependiendo del sistema operativo puede no funcionar en todos)
        system("cls");

        // Mostrar las opciones del menú
        cout << "\n\n\t\tBUSCA MINAS -Menu-" << endl;
        cout << "\t\tJugador: " << nombrejugador << endl;
        cout << "\t\t---------------------------------" << endl;
        cout << "\t\t1. Configuración del Juego" << endl;
        cout << "\t\t2. Iniciar el Juego" << endl;
        cout << "\t\t3. Salir del Juego" << endl;
        cout << "\n\t\tIngrese una opcion: ";
        cin >> opciones;  // Leer la opción seleccionada por el usuario

        // Ejecutar la opción seleccionada
        switch (opciones)
        {
        case 1:
            {
                // Si el usuario elige la opción 1, se abrirá el menú de configuración
                configuracionJuego.menuConfiguracion();
                break;
            }
        case 2:
            {
                // Si el usuario elige la opción 2, se inicia el juego con las configuraciones actuales
                Juego juegoTemporal(Tablero(configuracionJuego.getfilasTablero(), configuracionJuego.getcolumnasTablero(),
                                            configuracionJuego.getmodoDesarrolladorTablero()), 
                                    configuracionJuego.getminasTablero(), configuracionJuego.getvidasTablero());
                juegoTemporal.iniciar();  // Inicia el juego
                
                system("pause");  // Pausa el sistema después de terminar el juego
                break;
            }
        case 3:
            // Si el usuario elige la opción 3, el programa termina el bucle y sale
            repetir = false;
            break;
        }
    } while (repetir);  // Continuar el bucle mientras 'repetir' sea true

    system("cls");  // Limpiar la pantalla al salir
    return 0;  // Fin del programa
}

