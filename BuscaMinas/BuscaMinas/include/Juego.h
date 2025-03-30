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
	std::chrono::steady_clock::time_point tiempoInicio; // Marca el inicio del cron�metro.
	void mostrarCronometro(); // Muestra el tiempo transcurrido en el juego.

	int cantidadMinas; // N�mero total de minas en el tablero.
	int vidas; // N�mero de vidas restantes del jugador.
	int victorias; // Contador de victorias del jugador.
	int derrotas; // Contador de derrotas del jugador.

	// Funci�n auxiliar para generar un n�mero aleatorio dentro de un rango dado.
	// Parametros:
	// - minimo: Valor m�nimo del rango.
	// - maximo: Valor m�ximo del rango.
	// Retorna: Un n�mero aleatorio entre minimo y maximo.
	int aleatorio_en_rango(int minimo, int maximo);

	// Genera una fila aleatoria dentro de los l�mites del tablero.
	// Retorna: N�mero de fila aleatorio.
	int filaAleatoria();

	// Genera una columna aleatoria dentro de los l�mites del tablero.
	// Retorna: N�mero de columna aleatorio.
	int columnaAleatoria();

public:
	// Constructor de la clase Juego.
	// Parametros:
	// - tablero: Objeto Tablero que representa el campo de juego.
	// - cantidadMinas: N�mero total de minas a colocar en el tablero.
	Juego(Tablero tablero, int cantidadMinas);

	// Coloca minas aleatoriamente en el tablero.
	void colocarMinasAleatoriamente();

	// Solicita al usuario que ingrese una fila para descubrir.
	// Retorna: N�mero de fila ingresado por el usuario.
	int solicitarFilaUsuario();

	// Solicita al usuario que ingrese una columna para descubrir.
	// Retorna: N�mero de columna ingresado por el usuario.
	int solicitarColumnaUsuario();

	// Verifica si el jugador ha descubierto todas las celdas sin minas, es decir, si ha ganado.
	// Retorna: true si el jugador ha ganado, false en caso contrario.
	bool jugadorGana();

	// Inicia el juego, manejando la l�gica principal de la partida.
	void iniciar();

	// Muestra la portada del juego cargada desde un archivo.
	// Parametros:
	// - nombreArchivo: Nombre del archivo que contiene la portada.
	void dibujarPortada(std::string nombreArchivo);

	// Muestra el marcador con las victorias y derrotas del jugador.
	void mostrarMarcador() const;

	// Devuelve la cantidad de vidas restantes del jugador.
	// Retorna: N�mero de vidas restantes.
	int getVidas() const;
};

#endif // JUEGO_H
