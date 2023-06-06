/**
 * Autor Ricardo Medina Nolasco 
 * Implemntacion de clase Tanque
*/

#include "Tanque.h"
#include <iostream>
using namespace std;

Tanque::Tanque()
{
    nivelGas = 100;
    tasaDis = .005;
    capMax = 42;
}

double Tanque::gastarTanque(int lit)
{
    
}

void Tanque::imprimir()
    {
        cout << "Nivel gas es: " << nivelGas << " %" << endl;
        cout << "Tasa es: " << tasaDis << endl;
        cout << "Cap Max es: " << capMax << endl;
    }
