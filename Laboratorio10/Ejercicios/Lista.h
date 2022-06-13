#ifndef LISTA_H
#define LISTA_H
#include "Nodo.h"
#include <iostream>
using namespace std;

class Lista
{
private:
    Nodo* inicio;
public:
    Lista(/* args */);
    ~Lista();
    void setInicio(Nodo*);
    Nodo* getInicio();
    Nodo* getUltimo();
    void InsertarUltimo(Nodo*);
    void InsertarInicio(int);
    void InsertarMedio(int);
    void EliminarUltimo();
    void EliminarInicio();
    Nodo* Buscar(int);
    void Eliminar(int);
    void ordenAscendente();
    void ordenDescendente();

};

Lista::Lista(/* args */){
    inicio = NULL;
}

Lista::~Lista(){}

void Lista::setInicio(Nodo* inicio){
    this->inicio = inicio;
}
Nodo* Lista::getInicio(){
    return inicio;
}

Nodo* Lista::getUltimo(){
    Nodo* ultimo = getInicio();
    while (ultimo->getSiguiente() != NULL)
    {
        ultimo = ultimo->getSiguiente();
    }
    return ultimo;
    
}

void Lista::InsertarUltimo(Nodo* aux){
    if(getInicio() == NULL)
        setInicio(aux);
    else
        getUltimo()->setSiguiente(aux);
}

void Lista::InsertarInicio(int dato){
    Nodo* aux = new Nodo(dato);
    aux->setSiguiente(getInicio());
    setInicio(aux);
}

void Lista::InsertarMedio(int){

}
void Lista::EliminarUltimo(){
    Nodo* aux1 = getInicio();
    Nodo* aux2 = NULL;
    while (aux1->getSiguiente() != NULL)
    {
        aux2 = aux1;
        aux1 = aux1->getSiguiente();
    }
    
    aux2->setSiguiente(NULL);
    delete aux1;      
}

void Lista::EliminarInicio(){
    Nodo* aux = getInicio();
    setInicio(getInicio()->getSiguiente());
    delete aux;    
}

Nodo* Lista::Buscar(int dato){
    Nodo* busqueda = getInicio();
    while ((busqueda != NULL) and (busqueda->getDato() != dato))
        busqueda = busqueda->getSiguiente();
    return busqueda;
    
}

void Lista::Eliminar(int dato){
    Nodo* busqueda = getInicio();
    Nodo* anterior = NULL;
    if (busqueda->getDato() == dato)
        setInicio(getInicio()->getSiguiente());
    else{
        while ((busqueda != NULL) and (busqueda->getDato() != dato))
        {
            anterior = busqueda;
            busqueda = busqueda->getSiguiente();
        }

        if (busqueda != NULL){
            anterior->setSiguiente(busqueda->getSiguiente());
        }    
    }
    delete busqueda;    
}

void Lista::ordenAscendente(){
    int temp_dato;
    Nodo* aux = getInicio();
    Nodo* temp = aux;
    while (aux){
        temp = aux;
        while (temp->getSiguiente())
        {
            temp = temp->getSiguiente();
            if (aux->dato > temp->dato){
                temp_dato = aux->dato;
                aux->dato = temp->dato;
                temp->dato = temp_dato;
            }
        }
        aux = aux->getSiguiente();
    }
    
}

void Lista::ordenDescendente(){
    int temp_dato;
    Nodo* aux = getInicio();
    Nodo* temp = aux;
    while (aux){
        temp = aux;
        while (temp->getSiguiente())
        {
            temp = temp->getSiguiente();
            if (aux->dato < temp->dato){
                temp_dato = aux->dato;
                aux->dato = temp->dato;
                temp->dato = temp_dato;
            }
        }
        aux = aux->getSiguiente();
    }
    
}

#endif