/**
 * Autor Ricardo Medina Nolasco
 * Implementacion de clase llanta
*/
#include "Llanta.h"

//Constructor
Llanta::Llanta()
{
    presion = 33;
}

//Funcion para accesar el da de presion
int Llanta::getPresion()
{
    return presion;
}
//Funcion para cambiar el valor de presion
void Llanta::setPresion(int preNueva)
{
    presion = preNueva;
}
