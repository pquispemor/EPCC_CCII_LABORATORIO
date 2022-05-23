#include <iostream>
#include "Objeto.h"
using namespace std;

int main(){
    Objeto* ob1 = new Objeto(128,64,0,"Madera","Mesa");
    ob1->mostrarDatos();
    delete ob1;
    return 0;
}
