/**
 * Autor Ricardo Medina NOLASCO
 * Implementacion de la clase Tablero
*/
#include "Tablero.h"
#include <iostream>
#include "Luces.h"
#include "Tanque.h"
#include "Auto.h"
using namespace std;

Tablero::Tablero()
{
    interaccion = 0;
    nivelPeligro = 15;
    velocidadPeligro = 160;
    velocidad = 0;
    nivelGas = 100;
}


void Tablero::dibujarTablero(Tanque t, Luces l, Auto a, int accion)
{
    interaccion = accion;
    if (interaccion != 0)
    {
        if (interaccion == 1)
        {
            velocidad = a.acelerar();
        }
        if (interaccion == 2)
        {
            velocidad = a.frenar();
        }
        nivelGas = t.getNivelGas();
    }
        cout << "Velocidad: "<< velocidad << endl;
        cout << "Nivel Gas: "<< nivelGas << endl;
}


