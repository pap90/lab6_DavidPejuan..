#ifndef PINTURA_H
#define PINTURA_H
#include <string>
using std::string;
class Pintura
{
private:
    string color,acabado;
public:
    Pintura();
    Pintura(string,string);

    void setColor(string);
    void setAcabado(string);
    string getColor();
    string getAcabado();
    //~Pintura();
};


#endif