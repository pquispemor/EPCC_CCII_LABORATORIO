#include <iostream>
#include "Nodo.h"
#include "Pila.h"
using namespace std;

int tope;
Pila* p1 = new Pila();
Pila* p2 = new Pila();
Pila* p3 = new Pila();
int cont;

//* Recursividad
void pasosHanoi(int numero, int origen, int auxiliar, int destino){
    if (numero == 1){
        cout << " --------------------------------\n";
        cout << "Mover disco de  torre " << origen << " a " << destino << endl;
        cont++;
        if (origen == 1) {
            tope = p1->TOP();
            p1->POP();
        }
        if (origen == 2) {
            tope = p2->TOP();
            p2->POP();
        }
        if (origen == 3) {
            tope = p3->TOP();
            p3->POP();
        }
        

        if (destino == 1) {
            p1->PUSH(tope);
        }
        if (destino == 2) {
            p2->PUSH(tope);
        }
        if (destino == 3) {
            p3->PUSH(tope);
        }

        cout << "Origen : ";
        p1->listar();
        cout << endl;
        cout << "Auxiliar : ";
        p2->listar();
        cout << endl;
        cout << "Destino : ";
        p3->listar();
        cout << endl;
        cout << endl;
    }
    else{
        pasosHanoi(numero-1,origen,destino,auxiliar);
        cout << " --------------------------------\n";
        cout << "Mover disco de  torre " << origen << " a " << destino << endl;
        cont++;
        if (origen == 1) {
            tope = p1->TOP();
            p1->POP();
        }
        if (origen == 2) {
            tope = p2->TOP();
            p2->POP();
        }
        if (origen == 3) {
            tope = p3->TOP();
            p3->POP();
        }
        

        if (destino == 1) {
            p1->PUSH(tope);
        }
        if (destino == 2) {
            p2->PUSH(tope);
        }
        if (destino == 3) {
            p3->PUSH(tope);
        }
        cout << "Origen : ";
        p1->listar();
        cout << endl;
        cout << "Auxiliar : ";
        p2->listar();
        cout << endl;
        cout << "Destino : ";
        p3->listar();
        cout << endl;
        cout << endl;
        pasosHanoi(numero-1,auxiliar,origen,destino);
    }
}


int main(){

    int cantDiscos;
    cout << "Indique la cantidad de Discos: " << endl;
    cin >> cantDiscos;
    for (int i = 1; i <= cantDiscos; i++){
        p1->PUSH(i);
    }
    cout << " --------------------------------\n";
    cout << "Origen : ";
    p1->listar();
    cout << endl;
    cout << "Auxiliar : ";
    p2->listar();
    cout << endl;
    cout << "Destino : ";
    p3->listar();
    cout << endl;
    cout << "\t\nMovimientos\n\n";
    int numero = p1->TOP();
    pasosHanoi(numero,1,2,3);
    cout << "CANTIDAD DE MOVIMIENTOS: " << cont;

    delete p1;
    delete p2;
    delete p3;

    return 0;
}