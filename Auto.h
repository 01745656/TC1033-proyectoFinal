/**
 * Autor Ricardo Medina Nolasco
 * Crecion de clase auto
*/

#ifndef AUTO_H
#define AUTO_H
#include "Luces.h"
#include "Tanque.h"
#include <iostream>
using namespace std;

class Auto
{
private:
    int estadoAuto;
    int velocidadActual;
    int tasaFrenado;
    int tasaAceleracion;
    int velocidadMaxima;
    Tanque t;
    Luces l;

public:
    Auto();
    int acelerar();
    int frenar();
    void imprimir();
    int encenderApagarAuto();
    void interaccionUsuario(int i);

};
#endif