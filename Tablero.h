/**
 * Autor Ricardo Medina Nolasco
 * Clase tablero
*/
#ifndef TABLERO_H
#define TABLERO_H
#include <iostream>
using namespace std;


class Tablero
{
private:
    
    int nivelPeligro;
    int velocidadPeligro;
    
public:
    Tablero();
    void dibujarTablero(string estdoAuto, int velocidad, double nGas, string estadoLuz, int llanta1, int llanta2, int llanta3, int llanta4);
    int mostrarOpciones();

};
#endif