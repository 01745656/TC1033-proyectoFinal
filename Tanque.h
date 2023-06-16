/**
 * Autor Ricardo Medina Nolasco
 * Clase de tanque este actua como el tanque de gasolina en el coche
*/

#ifndef TANQUE_H
#define TANQUE_H
//Nombre de clase
class Tanque
{
private:
//Atributos
    double nivelGas;
    double tasaDis;
    int capMax;
    double nivelPerc;

public:
//Metodos
    Tanque();
    double cargarTanque();
    double gastarTanque(int velAct);
    double getNivelGas();

};

#endif 


