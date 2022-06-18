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
    void Push(int);
    void imprimir();
    void PopBuscar(int);
    void PopEliminar();
};

Pila::Pila(){
    this->tam = 0;
    this->inicio = NULL;
}

Pila::~Pila(){}

void Pila::Push(int n){
    Nodo* nuevo = new Nodo();
    nuevo->dato = n;
    nuevo->siguiente = this ->inicio;
    this->inicio = nuevo;
    cout << "Nodo " << n << " insertado correctamente" << endl;
    cout << "\n\nPresione cualquier tecla para continuar...";
    this->tam++;
}

void Pila::imprimir(){
    Nodo* aux = this->inicio;
    int cont = 1;
    while(aux != NULL){
        cout << "[" << cont << "] Dato: " << aux->dato << endl;
        aux = aux->siguiente;
        cont++;
    }
    cout << "\n\nPresione cualquier tecla para continuar...";
}
void Pila::PopEliminar(){
    Nodo* aux = this->inicio;
    if(aux != NULL){
        this->inicio = aux->siguiente;
        delete aux;
        cout << "Dato Eliminado Correctamente" << endl;
        cout << "\n\nPresione cualquier tecla para continuar...";  
    }
    else{
        cout << "La lista esta vacia "  << endl;
        cout << "\n\nPresione cualquier tecla para continuar..."; 
    }
}

void Pila::PopBuscar(int d){
    int enc=0;
    Nodo* busqueda = this->inicio;
    while(busqueda != NULL){
        if(busqueda->dato == d){
            cout << "Se encontro el nodo : " << busqueda->dato << endl;
            enc=1;
            break;
        }
        else{
            busqueda = busqueda->siguiente;
        }
    }
    if (enc == 0)
        cout << "No se encontro el nodo o no existe " << endl;
    cout << "\n\nPresione cualquier tecla para continuar..."; 
    
}
#endif