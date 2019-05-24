#include "Chasis.h"
Chasis::Chasis(){
    
}
Chasis::Chasis(string ruedas,string transmision){
    this->transmision=transmision;
    this->ruedas=ruedas;
}
string Chasis::getRuedas(){
    return ruedas;
}
string Chasis::getTransmision(){
    return transmision;
}
