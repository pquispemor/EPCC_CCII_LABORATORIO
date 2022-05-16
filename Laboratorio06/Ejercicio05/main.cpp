#include <iostream>
#include "matriz.h"

using namespace std;

int main(){
    matriz m1(3);
    m1.crear();
    m1.mostrar();
    m1.busqueda(1);
    return 0;
}