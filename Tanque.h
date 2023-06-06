/**
 * Autor Ricardo Medina Nolasco
 * Clase de tanque este actua como el tanque de gasolina en el coche
*/

#ifndef TANQUE_H
#define TANQUE_H
class Tanque
{
private:
    double nivelGas;
    double tasaDis;
    int capMax;

public:
    Tanque();
    double cargarTanque(int lit);
    double gastarTanque(int velAct);
    void imprimir();

};

#endif 


