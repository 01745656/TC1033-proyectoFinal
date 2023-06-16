/**
 * Autor Ricardo Medina Nolasco 
 * Creacion de clase de luces
*/

#ifndef LUCES_H
#define LUCES_H
#include <iostream>
using namespace std;

//Nombre de clase
class Luces
{
//Atributos
private:
    string estadoLuces;
//Metodos 
public:
    Luces();
    void prenderLuces();
    void apagarLuces();
    string getestadoLuces();

};

#endif