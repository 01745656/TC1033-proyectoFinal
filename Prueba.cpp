/**
 * Autor: Ricardo Medina Nolasco
*/

#include "Tanque.h"
#include "Luces.h"
#include "Tablero.h"
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    Tanque t;
    t.imprimir();
    

    Luces l;
    l.imprimir();

    Tablero ta;
    ta.dibujarTablero(t, l);

    t.gastarTanque(25);
    l.prenderLuces();
    t.gastarTanque(200);
    

    ta.dibujarTablero(t,l);
    
    
    

    return 0;
}
