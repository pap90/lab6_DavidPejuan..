#ifndef CARRO_H
#define CARRO_H
#include "Motor.h"
#include "Pintura.h"
#include "Chasis.h"

class Carro
{
private:
    Chasis* chasis;
    Motor* motor;
    Pintura* pintura;
    
public:
    Carro();
    Carro(Chasis*,Motor*,Pintura*);
    
    //~Carro();
};
#endif