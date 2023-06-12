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
    a.interaccionUsuario(0);
    a.interaccionUsuario(6);
    a.interaccionUsuario(1);
    a.interaccionUsuario(6);
    a.interaccionUsuario(3);
    a.interaccionUsuario(6);
    a.interaccionUsuario(0);
    a.interaccionUsuario(6);
//El tablero tiene la funcion de dibujar esta tiene los parametros y dentro de interaccion con usuario se dibuja





    
    return 0;
}
