#include <iostream>
#include "Poligono.h"
using namespace std;

int main(){
    Poligono rectangulo = Poligono(5,3);
    cout<<"El area del rectangulo es: "<<rectangulo.area()<<endl;
    cout<<"El perimetro del rectangulo es: "<<rectangulo.perimetro()<<endl;
    return 0;
}