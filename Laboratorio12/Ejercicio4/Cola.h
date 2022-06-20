#ifndef COLA_H
#define COLA_H
#include <iostream>
#include "Nodo.h"

using namespace std;

class Cola
{
public:
    Nodo* inicio;
    int tam;
    Cola();
    ~Cola();
    void Insertar(int);
    int TOP();
    void Imprimir();
    void Eliminar();
};

Cola::Cola()
{
    this->tam = 0;
    this->inicio = NULL;
}

Cola::~Cola()
{
}

void Cola::Insertar(int n){
    Nodo* nuevo = new Nodo();
    nuevo->dato = n;
    if (this->inicio == NULL)
        this->inicio = nuevo;
    else{
        Nodo* ultimo = this->inicio;
        while (ultimo->siguiente != NULL)
        {
            ultimo = ultimo->siguiente;
        }

        ultimo->siguiente = nuevo;
    }
    this->tam++;
}

int Cola::TOP(){
    Nodo* aux = this->inicio;
    if(aux != NULL){
        return aux->dato;
    }
    else{
        cout << "La cola esta vacia "  << endl;
    }

}

void Cola::Imprimir(){
    Nodo* aux = this->inicio;
    int cont = 1;
    while(aux != NULL){
        cout << "[" << cont << "] Edad: " << aux->dato << " ";
        aux = aux->siguiente;
        cont++;
    }
}
void Cola::Eliminar(){
    Nodo* aux = this->inicio;
    if(aux != NULL){
        this->inicio = aux->siguiente;
        delete aux;
        this->tam--;
    }
    else{
        cout << "La cola esta vacia "  << endl;
    }
}

#endif