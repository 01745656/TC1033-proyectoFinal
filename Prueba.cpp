/**
 * Autor: Ricardo Medina Nolasco
*/

#include "Tanque.h"
#include "Luces.h"
#include "Tablero.h"
#include "Auto.h"
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    Tanque t;
    Luces l;
    //l.imprimir();
    //t.gastarTanque(25);
    //l.prenderLuces();
    //t.gastarTanque(200);
    //ta.dibujarTablero(t,l);

    Auto a;
    a.imprimir();
    a.acelerar();
    a.imprimir();
    a.acelerar();
    a.imprimir();





    
    return 0;
}
