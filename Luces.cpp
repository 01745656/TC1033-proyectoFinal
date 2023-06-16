/**
 * Autor Ricardo Medina Nolasco
 * Implemntacion de la clsae Luces
*/

#include "Luces.h"
#include <iostream>
using namespace std;

//Constructor 
Luces::Luces()
{
    estadoLuces = "Apagadas";
}
//Funcion para prener luces
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

//Funcion para apagar luces
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

//Funcion para accesar el estado luces
string Luces::getestadoLuces()
{
    return estadoLuces;
}
