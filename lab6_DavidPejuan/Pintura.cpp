#include "Pintura.h"
Pintura::Pintura(){
    
}
Pintura::Pintura(string color,string acabado){
    this->acabado=acabado;
    this->color=color;
}
string Pintura::getAcabado(){
    return acabado;
}
string Pintura::getColor(){
    return color;
}