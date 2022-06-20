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
    void Imprimir();
    void Buscar(int);
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
    
    cout << "Nodo " << n << " insertado correctamente" << endl;
    cout << "\n\nPresione cualquier tecla para continuar...";
    this->tam++;
}

void Cola::Imprimir(){
    Nodo* aux = this->inicio;
    int cont = 1;
    while(aux != NULL){
        cout << "[" << cont << "] Dato: " << aux->dato << endl;
        aux = aux->siguiente;
        cont++;
    }
    cout << "\n\nPresione cualquier tecla para continuar...";
}

void Cola::Eliminar(){
    Nodo* aux = this->inicio;
    if(aux != NULL){
        this->inicio = aux->siguiente;
        delete aux;
        this->tam--;
        cout << "Dato Eliminado Correctamente" << endl;
        cout << "\n\nPresione cualquier tecla para continuar...";  
    }
    else{
        cout << "La cola esta vacia "  << endl;
        cout << "\n\nPresione cualquier tecla para continuar..."; 
    }
}

void Cola::Buscar(int d){
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