#include <iostream>
#include "arreglo.h"

using namespace std;

int main(){
    arreglo a1(5);
    a1.crear();
    a1.agregar(1);
    a1.agregar(4);
    a1.agregar(8);
    a1.agregar(10);
    a1.agregar(5);
    a1.agregar(6);
    a1.mostrar();
    a1.eliminar();
    a1.agregar(20);
    a1.mostrar();
    a1.~arreglo();
}