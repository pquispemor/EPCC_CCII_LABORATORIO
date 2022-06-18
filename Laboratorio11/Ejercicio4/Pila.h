#ifndef PILA_H
#define PILA_H
#include <iostream>
#include "Nodo.h"

using namespace std;

class Pila
{
    
public:
    Nodo* inicio;
    int tam;
    Pila();
    ~Pila();
    void PUSH(int);
    int TOP();
    void POP();
    void listar();
};

Pila::Pila(){
    this->tam = 0;
    this->inicio = NULL;
}

Pila::~Pila(){}

//* Insertar 
void Pila::PUSH(int n){
    Nodo* nuevo = new Nodo(n);
    nuevo->siguiente = this ->inicio;
    this->inicio = nuevo;
    this->tam++;
}

//* Primer Elemento de la Pila
int Pila::TOP(){
    Nodo* aux = this->inicio;
    if(aux != NULL){
        return aux->dato;
    }
    else{
        cout << "La lista esta vacia "  << endl;
    }

}

//*Elimnar Elemento de la pila
void Pila::POP(){
    if(inicio != NULL){
        Nodo* aux = this->inicio;
        this->inicio = aux->siguiente;
        delete aux;
        this->tam--;
    }
}

//* Imprimir Pila

void Pila::listar(){
    Nodo* aux = this->inicio;
    while(aux != NULL){
        cout << aux->dato << "  ";
        aux = aux->siguiente;
    }
}

#endif