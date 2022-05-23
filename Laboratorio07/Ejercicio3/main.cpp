#include <iostream>
#include "CuentaJoven.h"
#include "Hipoteca.h"
using namespace std;

int main(){
    CuentaJoven* cj= new CuentaJoven("Paul",124.50);
    cj->imprimir();
    Hipoteca* hp = new Hipoteca("Rodrigo",500.65);
    hp->imprimir();

    delete cj;
    delete hp;
    return 0;
}