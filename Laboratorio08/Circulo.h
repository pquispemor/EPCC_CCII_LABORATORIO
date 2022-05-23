#include <iostream>
#include "Elipse.h"
using namespace std;

class Circulo : public Elipse
{
private:
    /* data */
public:
    Circulo(string,int,int,string,float,float);
    ~Circulo();
    void imprimir();
    float area();
};

Circulo::Circulo(string color,int x,int y, string nombreForma, float rMayor, float rMenor)
: Elipse(color,x,y,nombreForma,rMayor,rMenor)
{
}

Circulo::~Circulo()
{
}

void Circulo::imprimir(){
    Forma::imprimir();
    cout<<"Radio: "<<getRmayor()<<endl;
}

float Circulo::area(){
    float radio = getRmayor();
    float areaE = 3.1416*radio*radio;
    return areaE;
}