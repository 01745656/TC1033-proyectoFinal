/**
 * Autor Ricardo Medina Nolasco
 * Implemntacion de la clsae Luces
*/

#include "Luces.h"
#include <iostream>
using namespace std;

Luces::Luces()
{
    estadoLuces = "Apagadas";
}

void Luces::prenderLuces()
{
    if(estadoLuces == "Apagadas")
    {
        estadoLuces = "Prendidas";
    }
    else
    {
        cout << "Las luces ya estan prendidas" << endl;
    }
}

void Luces::apagarLuces()
{
    if(estadoLuces == "Prendidas")
    {
        estadoLuces = "Apagadas";
    }
    else
    {
        cout << "Las luces ya estan apagadas" << endl;
    }
}

void Luces::imprimir()
{
    cout <<"Estado de Luces: "<< estadoLuces <<endl;
}

string Luces::getestadoLuces()
{
    return estadoLuces;
}
