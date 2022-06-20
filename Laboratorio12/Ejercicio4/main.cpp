#include <iostream>
#include "Nodo.h"
#include "Cola.h"

using namespace std;

Cola* c1 = new Cola();
Cola* c2 = new Cola();


void ColaMayor(int iteraciones){
    int mayorH = 0,mayorM = 0;
    for(int i=0;i<iteraciones;i++){
        cout << " --------------------------------\n";
        cout << "[" << i+1 << "] iteracion : \n";
        cout << "Cola Hombres : ";
        c1->Imprimir();
        cout << endl;
        cout << "Cola Mujeres : ";
        c2->Imprimir();
        cout << endl;
        if(c1->TOP() > c2->TOP()){
            mayorH++;
            c1->Insertar(c1->TOP());
            c2->Insertar(c2->TOP());
            c1->Eliminar();
            c2->Eliminar();
            cout << "La cola de Hombres es mayor" << endl;
        }
        else{
            mayorM++;
            c1->Insertar(c1->TOP());
            c2->Insertar(c2->TOP());
            c1->Eliminar();
            c2->Eliminar();
            cout << "La cola de Mujeres es mayor" << endl;
        }
    }
    cout << " --------------------------------\n";
    cout << " RESULTADOS \n";
    cout << " --------------------------------\n";
    if(mayorH > mayorM)
        cout << "La cola de Hombres es mayor en : " << iteraciones << " iteraciones." << endl;
    else if(mayorH == mayorM){
        cout << "EMPATE en :" << iteraciones << " iteraciones." << endl;
    }
    else
        cout << "La cola de Mujeres es mayor en : " << iteraciones << " iteraciones." << endl;
}


int main(){

    int cantH, cantM;
    int edad;
    int iteraciones;
    cout << "Indique la cantidad de Hombres: " << endl;
    cin >> cantH;
    cout << "Indique la cantidad de Mujeres: " << endl;
    cin >> cantM;
    cout << " --------------------------------\n";
    cout << "Cola Hombres : \n";
    for (int i = 0; i < cantH; i++){
        cout << "Indicar edad del Hombre [" << i+1 << "] : " << endl;
        cin >> edad;
        c1->Insertar(edad);
    }
    cout << " --------------------------------\n";
    cout << "Cola Mujeres : \n";
    for (int i = 0; i < cantM; i++){
        cout << "Indicar edad de la Mujer [" << i+1 << "] : " << endl;
        cin >> edad;
        c2->Insertar(edad);
    }
    cout << " --------------------------------\n";
    cout << "Cola Hombres : ";
    c1->Imprimir();
    cout << endl;
    cout << "Cola Mujeres : ";
    c2->Imprimir();
    cout << endl;
    cout << " --------------------------------\n";
    cout << "\nIndicar el numero de iteraciones: \n";
    cin >> iteraciones;
    cout << " --------------------------------\n";
    cout << "CANTIDAD DE ITERACIONES: " << iteraciones << endl;
    cout << " --------------------------------\n";
    ColaMayor(iteraciones);

    delete c1;
    delete c2;

    return 0;
}