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

}

int Auto::acelerar()
{
    velocidadActual += tasaAceleracion;
    t.gastarTanque(velocidadActual);
    

    return velocidadActual;
}

int Auto::frenar()
{
    velocidadActual -= tasaFrenado;
    return velocidadActual;
}

void Auto::imprimir()
{
    cout << "Velodidad actual: " << velocidadActual << endl;
    cout << "Nivel Gasolina: " << t.getNivelGas() << endl;
}
