#include <iostream>
#include "Rectangulo.h"
using namespace std;

class Cuadrado : public Rectangulo
{
private:
    /* data */
public:
    Cuadrado(string,int,int,string,float,float);
    ~Cuadrado();
    void imprimir();
    float area();
};
Cuadrado::Cuadrado(string color,int x,int y, string nombreForma, float lmayor, float lmenor)
: Rectangulo(color,x,y,nombreForma,lmayor,lmenor)
{
}

Cuadrado::~Cuadrado()
{
}
void Cuadrado::imprimir(){
    Forma::imprimir();
    cout<<"Lado "<<getLmayor()<<endl;
}

float Cuadrado::area(){
    float lado = getLmayor();
    float areaC = lado*lado;
    return areaC;
}