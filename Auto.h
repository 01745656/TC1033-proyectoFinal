/**
 * Autor Ricardo Medina Nolasco
 * Crecion de clase auto para la simulacion
 */

#ifndef AUTO_H
#define AUTO_H
#include "Luces.h"
#include "Tanque.h"
#include "Tablero.h"
#include "Llanta.h"
#include <iostream>
using namespace std;

// Nombre de la clase
class Auto
{
//Datos y artibutos
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
//Metodos es decir acciones
public:
    Auto();
    int acelerar();
    int frenar();
    string encenderApagarAuto();
    int realizarAccion();
};
#endif