#ifndef RECTANGULO_H
#define RECTANGULO_H
#include <iostream>
#include "Forma.h"
using namespace std;

class Rectangulo : public Forma
{
private:
    float lmayor,lmenor;
public:
    Rectangulo(string,int,int,string,float,float);
    ~Rectangulo();
    void imprimir();
    float area();
    float perimetro();
    void cambiarTam(int escala);
    float getLmayor(){
        return lmayor;
    }
    float getLmenor(){
        return lmenor;
    }
};

Rectangulo::Rectangulo(string color,int x,int y, string nombreForma, float lmayor, float lmenor)
: Forma(color,x,y,nombreForma)
{
    this->lmayor = lmayor;
    this->lmenor = lmenor;
}

Rectangulo::~Rectangulo()
{
}

void Rectangulo::imprimir(){
    Forma::imprimir();
    cout<<"Lado Mayor: "<<lmayor<<endl;
    cout<<"Lado Menor: "<<lmenor<<endl;
}

float Rectangulo::area(){
    float areaR = lmayor*lmenor;
    return areaR;
}

float Rectangulo::perimetro(){
    float perR = 2*(lmayor+lmenor);
    return perR;
}

void Rectangulo::cambiarTam(int escala){
    cout<<"El tamaño del Rectangulo cambiada en un factor de: "<<escala<<endl;
    this->lmayor = lmayor*escala;
    this->lmenor = lmenor*escala;
}

#endif