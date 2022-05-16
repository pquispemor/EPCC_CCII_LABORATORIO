#include "arreglo.h"
#include <iostream>
using namespace std;

arreglo::arreglo(int n){
    this->n = n;
    A = new int[n];
}

arreglo::~arreglo(){
    delete []A;
}
void arreglo::crear(){
    for(int i=0; i < n; i++){
        A[i] = 0;
    }
}
void arreglo::agregar(int x){
  int cont=0;
  for(int i= 0; i < n; i++){
      if ( A[i] != 0)
        cont++;
  }
  if(cont < 5){
    cout << "Se pueden agregar mas datos" << endl;  
    A[cont] = x;
    cout << "Se agrego el dato: " << x << endl;
  }
  else{
      cout << "Ya no se pueden agregar mas datos - ARREGLO LLENO\n";
  }  
}

void arreglo::eliminar(){
  int cont=0;
  for(int i= 0; i < n; i++){
      if ( A[i] != 0)
        cont++;
  }
  if (cont == 0){
      cout << "Ya no se pueden eliminar datos - ARREGLO VACIO\n";
  }
  else {
      cout << "Se pueden eliminar datos\n";
      cout << "Se elimino el dato :" << A[cont-1] << endl;
      A[cont-1] = 0;
  }
}

void arreglo::mostrar(){
    for(int i=0; i < n; i++){
        cout << A[i] << ' ';
    }
    cout << endl;
}