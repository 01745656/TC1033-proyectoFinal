/**
 * Autor: Ricardo Medina Nolasco
*/

#include "Tanque.h"
#include "Luces.h"
#include "Tablero.h"
#include "Auto.h"
#include <iostream>
using namespace std;
//Funcion main
int main(int argc, char const *argv[])
{
    //Creacion de un objeto auto
    Auto a;
    int i;
    i = 0;
    while (i != 7)
    {
        while (i > 7 && i >= 0)
        {
            cout << "El numero debe de ser entre 0 y 7, escoje otro numero: ";
            cout << endl;
            i = a.realizarAccion(); // Funcion que realiza ls acciones
        }
        
        i = a.realizarAccion();
       

    }
    







    
    return 0;
}
