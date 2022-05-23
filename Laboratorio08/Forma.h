#ifndef FORMA_H
#define FORMA_H
#include <iostream>
#include "Punto.h"
using namespace std;

class Forma
{
private:
    string color;
    Punto centro;
    string nombreForma;
public:
    Forma(string,int,int,string);
    ~Forma();
    void imprimir();
    void obtenerCambiarColor(string);
    void moverCentro();
    string getNombre(){
        return nombreForma;
    }
    string getColor(){
        return color;
    }
    virtual float area() = 0;
};

Forma::Forma(string color,int x,int y, string nombreForma)
: centro(x,y)
{
    this->color = color;
    this->nombreForma = nombreForma;
}

Forma::~Forma()
{
}

void Forma::obtenerCambiarColor(string newcolor){;
    this->color = newcolor;
}

void Forma::moverCentro(){
    int x,y;
    cout<<"Mover coordenada X: ";
    cin>>x;
    cout<<"Mover coordenada Y:";
    cin>>y;
    centro.setX(x);
    centro.setY(y);
}

void Forma::imprimir(){
    cout<<"Nombre: "<<getNombre()<<endl;
    cout<<"Color: "<<getColor()<<endl;
    cout<<"Centro: ("<<centro.getX()<<","<<centro.getY()<<")"<<endl;
}

#endif