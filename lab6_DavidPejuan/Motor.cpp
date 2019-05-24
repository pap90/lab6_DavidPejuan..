#include "Motor.h"
Motor::Motor(){
    
}
Motor::Motor(string tipo,string configuracion){
    this->configuracion=configuracion;
    this->tipo=tipo;
}

string Motor::getConfiguracion(){
    return configuracion;
}
string Motor::getTipo(){
    return tipo;
}