#ifndef CHASIS_H
#define CHASIS_H
#include <string>
using std::string;
class Chasis
{
private:
    string ruedas,transmision;
public:
    Chasis();
    Chasis(string,string);

    string getRuedas();
    void setRuedas(string);

    string getTransmision();
    void setTransmision(string);
    
};




#endif