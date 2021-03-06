#ifndef CIRCULO_H
#define CIRCULO_H

#include <iostream>
#include "Forma.h"
using namespace std;

class Elipse : public Forma
{
private:
    float rMayor,rMenor;
public:
    Elipse(string,int,int,string,float,float);
    ~Elipse();
    void imprimir();
    float area();
    float getRmayor(){
        return rMayor;
    }
    float getRmenor(){
        return rMenor;
    }
};
Elipse::Elipse(string color,int x,int y, string nombreForma, float rMayor, float rMenor)
: Forma(color,x,y,nombreForma){
    this->rMayor = rMayor;
    this->rMenor = rMenor;
}
Elipse::~Elipse()
{
}
void Elipse::imprimir(){
    Forma::imprimir();
    cout<<"Radio Mayor: "<<rMayor<<endl;
    cout<<"Radio Menor: "<<rMenor<<endl;
}

float Elipse::area(){
    float areaE = 3.1416*rMayor*rMenor;
    return areaE;
}

#endif