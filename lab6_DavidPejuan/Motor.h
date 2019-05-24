#ifndef MOTOR_H
#define MOTOR_H
#include <string>
using std::string;

class Motor
{
private:
    string tipo,configuracion;
public:
    Motor();
    Motor(string,string);


    string getTipo();
    void setTipo(string);
    void setConfiguracion(string);
    string getConfiguracion();
    //~Motor();
};




#endif