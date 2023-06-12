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
    cout << "Cuantos litros desea agregar? " << endl;
    int lit;
    cin>>lit;
    if (nivelGas + lit < capMax)
    {
        nivelGas += lit;
        nivelPerc = (nivelGas*100)/capMax;
        return nivelPerc;
    }
    else
    {
        cout << "El tanque esta a su maxima capacidad"<<endl;
        return nivelPerc;
    }
    
}

double Tanque::gastarTanque(int velAct)
{
    nivelGas = nivelGas-((tasaDis)*(velAct));
    nivelPerc = (nivelGas*100)/capMax;
    return nivelPerc;
}

Tanque::Tanque(int nivGas)
{
    nivelGas = 42;
    tasaDis = .005;
    capMax = 42;
    nivelPerc = (nivelGas*100)/capMax; 
}

void Tanque::imprimir()
    {
        cout << "Nivel gas es: " << nivelPerc << " %" << endl;
        cout << "Tasa es: " << tasaDis << endl;
        cout << "Cap Max es: " << capMax << endl;
    }

    double Tanque::getNivelGas()
    {
        return nivelPerc;
    }
