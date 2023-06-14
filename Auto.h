/**
 * Autor Ricardo Medina Nolasco
 * Crecion de clase auto
 */

#ifndef AUTO_H
#define AUTO_H
#include "Luces.h"
#include "Tanque.h"
#include "Tablero.h"
#include "Llanta.h"
#include <iostream>
using namespace std;

class Auto
{
private:
    string estadoAuto;
    int velocidadActual;
    int tasaFrenado;
    int tasaAceleracion;
    int velocidadMaxima;
    Tanque t;
    Luces l;
    Tablero ta;
    Llanta c[4];

public:
    Auto();
    int acelerar();
    int frenar();
    string encenderApagarAuto();
    int realizarAccion();
};
#endif