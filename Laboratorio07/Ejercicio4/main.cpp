#include <iostream>
#include "ClaseDisco.h"
using namespace std;

int main(){
    ClaseDisco* disc = new ClaseDisco("Illenium","Fallen Embers",2021,"700MB");

    disc->mostrarDatos();

    delete disc;

    return 0;
}