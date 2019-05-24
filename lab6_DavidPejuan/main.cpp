#include <iostream>
#include "Carro.h"
#include <string>
#include <vector>
using namespace std;

Carro** agregarproduccion(Carro**);
int main(){
    int seleccion=0;
    int size;
    int cont=0;
    Carro** matrix=NULL;
    matrix=new Carro*[size];
    
    
    while (seleccion!=6)
    {
        cout<<"1) agregar linea de produccion. "<<endl
            <<"2) Ver matriz de líneas de producción. "<<endl
            <<"3) "<<endl
            <<"4) "<<endl
            <<"5)avanzar"<<endl
            <<"6)salir. "<<endl
            <<"Ingrese su seleccion: ";
            cin>>seleccion;
        switch (seleccion)
        {
        case 1:{
            if (cont<5)
            {
                
            
            
                matrix[cont]=new Carro[size];
                cout<<"Ingrse el tipo de ruedas: ";
                string ruedas;
                cin>>ruedas;
                cout<<endl;
                cout<<"ingrese el tipo de transmision: ";
                string transmision;
                cin>>transmision;
                cout<<endl;
                cout<<"Ingrese el tipo de motor: ";
                string tipo;
                cin>>tipo;
                cout<<endl;
                cout<<"Ingrese la configuracion del motor: ";
                string configuracion;
                cin>>configuracion;
                cout<<endl;
                cout<<"Ingrese el color del carro: ";
                string color;
                cin>>color;
                cout<<endl;
                cout<<"Ingrese el acabado del carro: ";
                string acabado;
                cin>>acabado;
                cout<<endl;
                matrix[cont][0]= Carro(new Chasis(ruedas,transmision),new Motor(tipo,configuracion),new Pintura(color,acabado));
                cont++;
            }
            }

            break;
        case 2:{
            
            }
            break;
        
        default:
            break;
        }
    }
    
}
Carro** agregarproduccion(Carro** matrix){
    
}