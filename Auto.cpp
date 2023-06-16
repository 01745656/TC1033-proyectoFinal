/**
 * Autor Ricardo Medina Nolasco
 * Implementacion clase auto
 */
#include "Auto.h"
#include <iostream>
using namespace std;

Auto::Auto()
{
    estadoAuto = "Apagado";
    velocidadActual = 0;
    tasaFrenado = 25;
    tasaAceleracion = 15;
    velocidadMaxima = 230;
    Tanque t;
    Luces l;
    Tablero ta;
    Llanta c[4];
}

int Auto::acelerar()
{
    if (estadoAuto == "Encendido")
    {
        if (t.getNivelGas() > 0)
        {
            if (velocidadActual == velocidadMaxima)
            {
                cout << "El auto ya no puede acelerar más" << endl;
            }
            else if (velocidadActual + tasaAceleracion > velocidadMaxima)
            {
                velocidadActual = velocidadMaxima;
            }
            else
            {
                velocidadActual += tasaAceleracion;
                t.gastarTanque(velocidadActual);
            }
        }
        else
        {
            velocidadActual = 0;
            cout << "El tanque no tiene gasolina" << endl;
        }
    }
    else
    {
        cout << "El auto no se puede mover si esta apagado" << endl;
    }

    return velocidadActual;
}

int Auto::frenar()
{

    if (estadoAuto == "Encendido")
    {
        if (velocidadActual == 0)
        {
            cout << "El auto ya esta inmovil" << endl;
        }
        else if (velocidadActual - tasaFrenado < 0)
        {
            velocidadActual = 0;
        }
        else
        {
            velocidadActual -= tasaFrenado;
        }
    }
    else
    {
        cout << "El auto no se puede mover si esta apagado" << endl;
    }

    return velocidadActual;
}

string Auto::encenderApagarAuto()
{
    if (estadoAuto == "Apagado")
    {
        estadoAuto = "Encendido";
    }
    else
    {
        estadoAuto = "Apagado";
    }
    return estadoAuto;
}

int Auto::realizarAccion()
{
    cout << endl;
    int i = ta.mostrarOpciones();
    cout << endl;
    if (i == 0)
    {
        encenderApagarAuto();
    }
    if (i == 1)
    {
        acelerar();
    }
    if (i == 2)
    {
        frenar();
    }
    if (i == 3)
    {
        l.prenderLuces();
    }
    if (i == 4)
    {
        l.apagarLuces();
    }
    if (i == 5)
    {
        if (t.getNivelGas() < 42)
        {
        t.cargarTanque();
        }
        else
        {
            cout << "El tanque esta a su maxima capacidad." << endl;
        }
    }
    if (i == 6)
    {
        int q;
        int d;
        cout << "Numero de la llanta que desea cambiar: ";
        cin >> q;
        cout << endl;
        cout << "Nueva presion: ";
        cin >> d;
        cout << endl;
        while (d < 0)
        {
            cout << "La presion no puede ser negativa ingrese nueva presion: ";
            cin >> d;
            cout << endl;
        }
        cout << endl;
        if ((d * 100) / 33 >= 120 || (d * 100) / 33 <= 80)
        {
            cout << "Presion de neumaticos peligrosa" << endl;
        }
        else
        {
            c[q - 1].setPresion(d);
        }
    }
    if (i < 7 && i >= 0)
    {
        cout << "------------------------" << endl;
        ta.dibujarTablero(estadoAuto, velocidadActual, t.getNivelGas(), l.getestadoLuces(), c[0].getPresion(), c[1].getPresion(), c[2].getPresion(), c[3].getPresion());
        cout << "------------------------" << endl;
    }
    return i;
}
