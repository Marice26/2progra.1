#include <iostream>
#include <stdlib.h>

using namespace std;
//Declaraciòn de Constantes
#define NUMEROALUMNOS 5
#define NUMEROMATERIAS 5
#define NUMERONOTAS 4
#define MAX_CALIFICACION 100
#define MIN_CALIFICACION 0
#define MAX_LONGITUD_CADENA 100
//Declaraciòn de Prototipos de Funciòn
void LlamarCiclo();
void InicializarMatriz(float matriz[NUMEROALUMNOS][NUMERONOTAS+1]);
void LlenarMatriz(float matriz[NUMEROALUMNOS][NUMERONOTAS+1]);
float imprimirMatriz(float matriz[NUMEROALUMNOS][NUMERONOTAS+1]);
int busquedaAleatoriaDeNotas(int minimo, int maximo);
int main()
{
    LlamarCiclo();
    return 0;
}
void LlamarCiclo()// Faltaba la lógica para calcular el promedio de cada facultad y no había forma de salir del ciclo do-while.
{
    float matrizFacultad_1[NUMEROALUMNOS][NUMERONOTAS+1];
    float matrizFacultad_2[NUMEROALUMNOS][NUMERONOTAS+1];
    float matrizFacultad_3[NUMEROALUMNOS][NUMERONOTAS+1];

    char opcion;
    bool repetir=true;

    float promedioFacultad_1;
    float promedioFacultad_2;
    float promedioFacultad_3;

    char alumnosFacultad[NUMEROALUMNOS][MAX_LONGITUD_CADENA]={"Carlos", "Luis", "Maria", "Pedro", "Mario"};

    do
    {
        promedioFacultad_1=0;
        promedioFacultad_2=0;
        promedioFacultad_3=0;
        cout << "*** Comparativo de Facultades ***" << endl << endl;
        InicializarMatriz(matrizFacultad_1);
        InicializarMatriz(matrizFacultad_2);
        InicializarMatriz(matrizFacultad_3);
        LlenarMatriz(matrizFacultad_1);
        LlenarMatriz(matrizFacultad_2);
        LlenarMatriz(matrizFacultad_3);
        promedioFacultad_1=imprimirMatriz(matrizFacultad_1);
        promedioFacultad_2=imprimirMatriz(matrizFacultad_2);
        promedioFacultad_3=imprimirMatriz(matrizFacultad_3);

        cout << "Promedio Facultad 1: " << promedioFacultad_1 << endl;//estaba devolviendo la suma de los promedios de los alumnos, no el promedio de la facultad. Se corrigió a return promedioFacultad / NUMEROALUMNOS; para calcular el promedio.
        cout << "Promedio Facultad 2: " << promedioFacultad_2 << endl;
        cout << "Promedio Facultad 3: " << promedioFacultad_3 << endl;

        cout << "Desea repetir el proceso? (s/n): ";
        cin >> opcion;
        if (opcion == 'n' || opcion == 'N') {
            repetir = false;
        }
    } while (repetir);

}
void InicializarMatriz(float matriz[NUMEROALUMNOS][NUMERONOTAS+1])
{
    //Funciòn que permite inicializar la matriz de calculos
    int i,j;
    for(i=0; i < NUMEROALUMNOS; i++) //manipula las filas en la matriz
    {
        for(j=0; j<NUMERONOTAS; j++) //manipula las columnas en la matriz
        {
            matriz[i][j]= 0.00;
        }
    }
}
void LlenarMatriz(float matriz[NUMEROALUMNOS][NUMERONOTAS+1])
{
    //Funciòn que permite calcular aleatoriamente las notas de cada alumno en la matriz
    int i,j;
    for(i=0; i < NUMEROALUMNOS; i++) //manipula las filas en la matriz
    {
        float suma=0;
        int calificacionAlumno=0;
        for(j=0; j<NUMERONOTAS; j++) //manipula las columnas en la matriz
        {
            if (j==0 || j==3) //primer parcial
            {
                calificacionAlumno = busquedaAleatoriaDeNotas(MIN_CALIFICACION, 20);
            }
            else if (j==1) //segundo parcial
            {
                calificacionAlumno = busquedaAleatoriaDeNotas(MIN_CALIFICACION, 25);
            }
            else if (j==2) //examen final
            {
                calificacionAlumno = busquedaAleatoriaDeNotas(MIN_CALIFICACION, 35);
            }
            suma+=(float)calificacionAlumno;
            matriz[i][j] = (float)calificacionAlumno;
        }
        matriz[i][NUMERONOTAS] = suma / NUMERONOTAS; // Calcula el promedio del alumno
    }
}
float imprimirMatriz(float matriz[NUMEROALUMNOS][NUMERONOTAS+1])
{
    //Funciòn que permite imprimir la matriz de calculos
    int i,j;
    float promedioFacultad = 0;
    for(i=0; i < NUMEROALUMNOS; i++) //manipula las filas en la matriz
    {
        cout << "Alumno " << i+1 << ": ";
        for(j=0; j<NUMERONOTAS+1; j++) //manipula las columnas en la matriz
        {
            cout << matriz[i][j] << " ";
            if (j == NUMERONOTAS) {
                promedioFacultad += matriz[i][j]; // Suma el promedio del alumno al total de la facultad
            }
        }
        cout << endl;
    }
    return promedioFacultad / NUMEROALUMNOS; // Calcula el promedio de la facultad
}
int busquedaAleatoriaDeNotas(int minimo, int maximo)
{
    //Funciòn que genera un numero aleatorio entre dos limites
    int numeroAleatorio;
    numeroAleatorio = rand() % (maximo - minimo + 1) + minimo;
    return numeroAleatorio;
}
