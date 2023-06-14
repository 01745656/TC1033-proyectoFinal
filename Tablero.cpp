/**
 * Autor Ricardo Medina NOLASCO
 * Implementacion de la clase Tablero
 */
#include "Tablero.h"
#include <iostream>

using namespace std;

int Tablero::mostrarOpciones()
{
    cout << "Escoge el numero de la accion que quieres realizar" << endl;
    cout << "0 = Prender/Apagar el auto." << endl;
    cout << "1 = Acelerar." << endl;
    cout << "2 = Frenar." << endl;
    cout << "3 = Prender luces." << endl;
    cout << "4 = Apagar luces." << endl;
    cout << "5 = Cargar gasolina." << endl;
    cout << "6 = Inflar o desinflar llantas." << endl;
    cout << "7 = Salir." << endl;
    cout << "Numero: ";
    int numero;
    cin >> numero;
    return numero;
}

Tablero::Tablero()
{
    nivelPeligro = 15;
    velocidadPeligro = 160;
}

void Tablero::dibujarTablero(string estdoAuto, int velocidad, double nGas, string estadoLuz, int llanta1, int llanta2, int llanta3, int llanta4)
{
    if (estdoAuto == "Encendido" && velocidad < velocidadPeligro && nGas > nivelPeligro) 
    {       
        cout << "Estado del Auto:          " << estdoAuto << endl;
        cout << endl;
        cout << "Velocidad:                " << velocidad << " Km/h" << endl;
        cout << "Nivel de gasolina:        " << nGas << " %" << endl;
        cout << "Luces:                    " << estadoLuz << endl;
        cout << "Presión llanta 1          " << llanta1 << " lb" << endl;
        cout << "Presión llanta 2          " << llanta2 << " lb" << endl;
        cout << "Presión llanta 3          " << llanta3 << " lb" << endl;
        cout << "Presión llanta 4          " << llanta4 << " lb" << endl;
    }
    else if (velocidad >= velocidadPeligro && estdoAuto == "Encendido")
    {
        cout << "Estado del Auto:          " << estdoAuto << endl;
        cout << endl;
        cout << "Velocidad:                " << velocidad << " Km/h (!CUIDADO¡)" << endl;
        cout << "Nivel de gasolina:        " << nGas << " %" << endl;
        cout << "Luces:                    " << estadoLuz << endl;
        cout << "Presión llanta 1          " << llanta1 << " lb" << endl;
        cout << "Presión llanta 2          " << llanta2 << " lb" << endl;
        cout << "Presión llanta 3          " << llanta3 << " lb" << endl;
        cout << "Presión llanta 4          " << llanta4 << " lb" << endl;
    }
    else if (nGas <= nivelPeligro && estdoAuto == "Encendido")
    {
        cout << "Estado del Auto:          " << estdoAuto << endl;
        cout << endl;
        cout << "Velocidad:                " << velocidad << " Km/h" << endl;
        cout << "Nivel de gasolina:        " << nGas << " % (BAJO)" << endl;
        cout << "Luces:                    " << estadoLuz << endl;
        cout << "Presión llanta 1          " << llanta1 << " lb" << endl;
        cout << "Presión llanta 2          " << llanta2 << " lb" << endl;
        cout << "Presión llanta 3          " << llanta3 << " lb" << endl;
        cout << "Presión llanta 4          " << llanta4 << " lb" << endl;
    }
    else if (velocidad >= velocidadPeligro && nGas <= nivelPeligro && estdoAuto == "Encendido")
    {
        cout << "Estado del Auto:          " << estdoAuto << endl;
        cout << endl;
        cout << "Velocidad:                " << velocidad << " Km/h (!CUIDADO¡)" << endl;
        cout << "Nivel de gasolina:        " << nGas << " % (BAJO)" << endl;
        cout << "Luces:                    " << estadoLuz << endl;
        cout << "Presión llanta 1          " << llanta1 << " lb" << endl;
        cout << "Presión llanta 2          " << llanta2 << " lb" << endl;
        cout << "Presión llanta 3          " << llanta3 << " lb" << endl;
        cout << "Presión llanta 4          " << llanta4 << " lb" << endl;
    }
    if (estdoAuto == "Apagado")
    {
        cout << "Estado del Auto:          " << estdoAuto << endl;
        cout << endl;
        cout << "Velocidad:                NA" << endl;
        cout << "Nivel de gasolina:        NA" << endl;
        cout << "Luces:                    NA" << endl;
        cout << "Presión llanta 1          " << llanta1 << " lb" << endl;
        cout << "Presión llanta 2          " << llanta2 << " lb" << endl;
        cout << "Presión llanta 3          " << llanta3 << " lb" << endl;
        cout << "Presión llanta 4          " << llanta4 << " lb" << endl;
    }
    
}
