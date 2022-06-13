#ifndef NODO_H
#define NODO_H
#include <iostream>
using namespace std;

class Nodo
{

public:
    int dato;
    Nodo *siguiente;
    Nodo();
    Nodo(int);
    ~Nodo();
    void setDato(int);
    int getDato();
    void setSiguiente(Nodo*);
    Nodo* getSiguiente();
};

Nodo::Nodo(/* args */){
    dato = 0;
    siguiente = NULL;
}

Nodo::Nodo(int dato){
    this->dato = dato;
    this->siguiente = siguiente;
}

void Nodo::setDato(int dato){
    this->dato = dato;
}
void Nodo::setSiguiente(Nodo* siguiente){
    this->siguiente = siguiente;
}
int Nodo::getDato(){
    return dato;
}
Nodo* Nodo::getSiguiente(){
    return siguiente;
}

Nodo::~Nodo(){}

#endif