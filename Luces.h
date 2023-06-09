/**
 * Autor Ricardo Medina Nolasco 
 * Clase de luces
*/

#ifndef LUCES_H
#define LUCES_H
#include <iostream>
using namespace std;

class Luces
{
private:
    int estadoLuces;

public:
    Luces();
    int prenderLuces();
    int apagarLuces();
    void imprimir();
    int getestadoLuces();

};

#endif