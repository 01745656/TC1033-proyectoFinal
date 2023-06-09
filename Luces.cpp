/**
 * Autor Ricardo Medina Nolasco
 * Implemntacion de la clsae Luces
*/

#include "Luces.h"
#include <iostream>
using namespace std;

Luces::Luces()
{
    estadoLuces = 0;
}

int Luces::prenderLuces()
{
    if(estadoLuces == 0)
    {
        estadoLuces = 1;
    }
    else
    {
        cout << "Las luces ya estan prendidas" << endl;
    }
    return estadoLuces;
}

int Luces::apagarLuces()
{
    if(estadoLuces == 1)
    {
        estadoLuces = 0;
    }
    else
    {
        cout << "Las luces ya estan apagadas" << endl;
    }
    return estadoLuces;
}

void Luces::imprimir()
{
    cout <<"Estado de Luces: "<< estadoLuces <<endl;
}

int Luces::getestadoLuces()
{
    return estadoLuces;
}
