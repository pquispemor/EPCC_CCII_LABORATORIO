#include <iostream>
#include "Rectangulo.h"
using namespace std;

class Cuadrado : public Rectangulo
{
private:
    /* data */
public:
    Cuadrado();
    Cuadrado(string,int,int,string,float,float);
    ~Cuadrado();
    void imprimir();
    float area();
};
Cuadrado::Cuadrado(){}
Cuadrado::Cuadrado(string color,int x,int y, string nombreForma, float lado1, float lado2)
: Rectangulo(color,x,y,nombreForma,lado1,lado2)
{
}

Cuadrado::~Cuadrado()
{
}
void Rectangulo::imprimir(){
    Forma::imprimir();
    cout<<"Lado "<<lado1<<endl;
}

float Rectangulo::area(){
    float areaR = lmayor*lmenor;
    return areaR;
}