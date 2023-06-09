/**
 * Autor: Ricardo Medina Nolasco
*/

#include "Tanque.h"
#include "Luces.h"
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    Tanque t;
    //t.imprimir();
    //t.gastarTanque(25);
    //t.imprimir();
    //t.cargarTanque(15);
    //t.imprimir();

    Luces l;
    l.imprimir();
    l.apagarLuces();
    l.imprimir();
    int a = l.getestadoLuces();
    

    return 0;
}
