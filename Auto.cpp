/**
 * Autor Ricardo Medina Nolasco
 * Implementacion clase auto
*/
#include "Auto.h"

Auto::Auto()
{
    estadoAuto = 0;
    velocidadActual = 0;
    tasaFrenado = 25;
    tasaAceleracion = 15;
    velocidadMaxima = 230;
    Tanque t;
    Luces l;

}

int Auto::acelerar()
{
    if (estadoAuto == 1)
    {
        velocidadActual += tasaAceleracion;
        t.gastarTanque(velocidadActual);
    }
     else 
    {
        cout << "El auto no se puede mover si esta apagado"<<endl;
    }

    return velocidadActual;
}

int Auto::frenar()
{
    if (estadoAuto == 1)
    {
        velocidadActual -= tasaFrenado;
    }
    else 
    {
        cout << "El auto no se puede mover si esta apagado"<<endl;
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


int Auto::encenderApagarAuto()
{
    if (estadoAuto == 0)
    {
        estadoAuto = 1;
    }
    else
    {
        estadoAuto = 0;
    }
    return estadoAuto;
}

void Auto::interaccionUsuario(int i)
{
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
}
