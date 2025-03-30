#ifndef CONFIG_H
#define CONFIG_H

// Clase Config: Permite configurar los par�metros del juego.
class Config
{
public:
    // Constructor
    Config(int filasTablero, int columnasTablero, int minasTablero, bool modoDesarrolladorTablero, int vidasTablero);

    // M�todos para obtener y modificar la configuraci�n del tablero
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

    // M�todo para mostrar el men� de configuraci�n
    void menuConfiguracion();

private:
    int filasTablero;
    int columnasTablero;
    int minasTablero;
    bool modoDesarrolladorTablero;
    int vidasTablero;
};

#endif // CONFIG_H
