/**
 * Autor Ricardo Medina NOLASCO
 * Implementacion de la clase Tablero
*/
#include "Tablero.h"
#include <iostream>
#include "Luces.h"
#include "Tanque.h"
using namespace std;

Tablero::Tablero()
{
    nivelGas = 0;
    estadoLuces = 0;
    nivelPeligro = 15;
    velocidadPeligro = 160;
    
}


void Tablero::dibujarTablero(Tanque t, Luces l)
{
     nivelGas = t.getNivelGas();
    estadoLuces = l.getestadoLuces();
    nivelPeligro = 15;
    velocidadPeligro = 160;
    
    if (estadoLuces == 1)
    {
        estadoLucesStr = "Prendido";
    }
    else
    {
        estadoLucesStr = "Apagado";
    }
    cout << "Nivel de gasoloina:         " << nivelGas << endl;
    cout << "Estado de Luces             " << estadoLucesStr << endl;
}


