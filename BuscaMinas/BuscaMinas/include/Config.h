#ifndef CONFIG_H
#define CONFIG_H

// Clase Config: Permite configurar los parámetros del juego.
class Config
{
public:
    // Constructor
    Config(int filasTablero, int columnasTablero, int minasTablero, bool modoDesarrolladorTablero, int vidasTablero);

    // Métodos para obtener y modificar la configuración del tablero
    int getfilasTablero();
    int setfilasTablero(int filasTablero);
    int getcolumnasTablero();
    int setcolumnasTablero(int columnasTablero);
    int getminasTablero();
    int setminasTablero(int minasTablero);
    bool getmodoDesarrolladorTablero();
    bool setmodoDesarrolladorTablero(bool modoDesarrolladorTablero);
    int getvidasTablero();
    int setvidasTablero(int vidasTablero);

    // Método para mostrar el menú de configuración
    void menuConfiguracion();

private:
    int filasTablero;
    int columnasTablero;
    int minasTablero;
    bool modoDesarrolladorTablero;
    int vidasTablero;
};

#endif // CONFIG_H
