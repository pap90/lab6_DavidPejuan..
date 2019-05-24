#include "Carro.h"

Carro::Carro(){

}

Carro::Carro(Chasis* chasis,Motor* motor,Pintura* pintura){
    this->chasis=chasis;
    this->motor=motor;
    this->pintura=pintura;
}
