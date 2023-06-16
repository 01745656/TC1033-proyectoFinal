/**
 * Autor Ricardo Medina Nolasco 
 * Implemntacion de clase Tanque
*/

#include "Tanque.h"
#include <iostream>
using namespace std;

Tanque::Tanque()
{
    nivelGas = 42;
    tasaDis = .005;
    capMax = 42;
    nivelPerc = (nivelGas*100)/capMax;
    
}

double Tanque::cargarTanque()
{
    cout << "Teclea los litros que se desean cargar: ";
    double lit;
    cin>>lit;
    cout << endl;
    while (lit < 0)
    {
        cout << "Los litros no pueden ser negativos: ";
        cin>>lit;
        cout << endl;
        while (nivelGas + lit > capMax )
        {
            cout << "Los litros que puso ecceden la capacidad maxima pruebe un numero menor: ";
            cin>>lit;
            cout << endl;
        }
    }

        nivelGas += lit;
        nivelPerc = (nivelGas*100)/capMax;
        return nivelPerc;

    
}

double Tanque::gastarTanque(int velAct)
{
    if (nivelGas-((tasaDis)*(velAct)) <= 0)
    {
        nivelGas = 0;
    }
    else
    {
        nivelGas = nivelGas-((tasaDis)*(velAct));
    }
    nivelPerc = (nivelGas*100)/capMax;
    return nivelPerc;
}

    double Tanque::getNivelGas()
    {
        return nivelPerc;
    }
