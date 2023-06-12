/**
 * Autor Ricardo Medina Nolasco
 * Clase tablero
*/
#ifndef TABLERO_H
#define TABLERO_H
#include "Luces.h"
#include "Tanque.h"
#include "Auto.h"

class Tablero
{
private:
    int interaccion;
    int nivelPeligro;
    int velocidadPeligro;
    int velocidad;
    int nivelGas;
    string estadoLucesStr;
    

public:
    Tablero();
    void dibujarTablero(Tanque t, Luces l, Auto a, int accion);

};
#endif