#include <time.h>
#include "matriz.h"
#include <iostream>

using namespace std;

matriz::matriz(int n){
    this->n = n;
    m = new int*[n];
    for (int i=0; i < n; i++){
        m[i] = new int[n];
    }
}
matriz::~matriz(){
    for(int i = 0; i < n; i++){
        delete m[i];
    }
    delete []m;
}

void matriz::crear(){
    srand(time(NULL));
    for(int i=0; i < n; i++){
        for (int j=0; j < n; j++){
            *(*(m+i)+j) = 1 + rand()%(9);
        }
    }
}

void matriz::mostrar(){
    for(int i=0; i < n; i++)
        cout << '\t' << "[" << i << "]";
    cout << endl;
    for(int i=0; i < n; i++){
        cout << "[" << i << "]" << '\t';
        for (int j=0; j < n; j++){
            cout << *(*(m+i)+j) << '\t';
        }
        cout << endl;
    }
}

void matriz::busqueda(int d){
    int cont=0;
    for(int i=0; i < n; i++){
        for (int j=0; j < n; j++){
            if (*(*(m+i)+j) == d){
                cout << "Se encontro el dato (" << d << ") en la posicion : [" << i <<"][" << j <<"]\n";
                cont++;
            }
        }
    }
    if(cont == 0){
        cout << "\nNo se encontro el dato (" << d <<") en la matriz";
    }
}