/**
 * Autor Ricardo Medina Nolasco
 * Clase tablero
*/
#ifndef TABLERO_H
#define TABLERO_H
#include "Luces.h"
#include "Tanque.h"

class Tablero
{
private:
    int estadoAuto;
    int velocidad;
    int nivelGas;
    int estadoLuces;
    int nivelPeligro;
    int velocidadPeligro;
    string estadoLucesStr;
    

public:
    Tablero();
    void dibujarTablero(Tanque t, Luces l);

};
#endif