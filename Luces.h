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
    string estadoLuces;

public:
    Luces();
    void prenderLuces();
    void apagarLuces();
    void imprimir();
    string getestadoLuces();

};

#endif