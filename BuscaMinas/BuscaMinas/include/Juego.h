#ifndef JUEGO_H
#define JUEGO_H
#include "Tablero.h"
#include <chrono>
#include <iostream>

// Clase Juego: Representa el juego de Buscaminas.
// Se encarga de gestionar el tablero, las minas, el tiempo, las vidas y el marcador.
class Juego
{
private:
	Tablero tablero;  // Objeto que representa el tablero del juego.
	std::chrono::steady_clock::time_point tiempoInicio; // Marca el inicio del cronómetro.
	void mostrarCronometro(); // Muestra el tiempo transcurrido en el juego.

	int cantidadMinas; // Número total de minas en el tablero.
	int vidas; // Número de vidas restantes del jugador.
	int victorias; // Contador de victorias del jugador.
	int derrotas; // Contador de derrotas del jugador.

	// Función auxiliar para generar un número aleatorio dentro de un rango dado.
	// Parametros:
	// - minimo: Valor mínimo del rango.
	// - maximo: Valor máximo del rango.
	// Retorna: Un número aleatorio entre minimo y maximo.
	int aleatorio_en_rango(int minimo, int maximo);

	// Genera una fila aleatoria dentro de los límites del tablero.
	// Retorna: Número de fila aleatorio.
	int filaAleatoria();

	// Genera una columna aleatoria dentro de los límites del tablero.
	// Retorna: Número de columna aleatorio.
	int columnaAleatoria();

public:
	// Constructor de la clase Juego.
	// Parametros:
	// - tablero: Objeto Tablero que representa el campo de juego.
	// - cantidadMinas: Número total de minas a colocar en el tablero.
	Juego(Tablero tablero, int cantidadMinas);

	// Coloca minas aleatoriamente en el tablero.
	void colocarMinasAleatoriamente();

	// Solicita al usuario que ingrese una fila para descubrir.
	// Retorna: Número de fila ingresado por el usuario.
	int solicitarFilaUsuario();

	// Solicita al usuario que ingrese una columna para descubrir.
	// Retorna: Número de columna ingresado por el usuario.
	int solicitarColumnaUsuario();

	// Verifica si el jugador ha descubierto todas las celdas sin minas, es decir, si ha ganado.
	// Retorna: true si el jugador ha ganado, false en caso contrario.
	bool jugadorGana();

	// Inicia el juego, manejando la lógica principal de la partida.
	void iniciar();

	// Muestra la portada del juego cargada desde un archivo.
	// Parametros:
	// - nombreArchivo: Nombre del archivo que contiene la portada.
	void dibujarPortada(std::string nombreArchivo);

	// Muestra el marcador con las victorias y derrotas del jugador.
	void mostrarMarcador() const;

	// Devuelve la cantidad de vidas restantes del jugador.
	// Retorna: Número de vidas restantes.
	int getVidas() const;
};

#endif // JUEGO_H
