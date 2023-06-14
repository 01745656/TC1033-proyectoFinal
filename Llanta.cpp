/**
 * Autor Ricardo Medina Nolasco
 * Implementacion de clase llanta
*/
#include "Llanta.h"

Llanta::Llanta()
{
    presion = 33;
}

int Llanta::getPresion()
{
    return presion;
}

void Llanta::setPresion(int preNueva)
{
    presion = preNueva;
}
