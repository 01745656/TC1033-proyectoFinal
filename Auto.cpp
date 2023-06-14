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

void Auto::imprimir()
{
    cout << "Velodidad actual: " << velocidadActual << endl;
    cout << "Nivel Gasolina: " << t.getNivelGas() << endl;
    cout << "Estado Auto: " << estadoAuto << endl;
    cout << "Estado Luces: " << l.getestadoLuces() << endl;
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

int Auto::interaccionUsuario()
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
        t.cargarTanque();
    }
    if (i == 6)
    {
        imprimir();
    }

    cout << "------------------------" << endl;
    ta.dibujarTablero(estadoAuto, velocidadActual, t.getNivelGas(), l.getestadoLuces());
    cout << "------------------------" << endl;

    return i;
}
