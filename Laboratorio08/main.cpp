#include <iostream>
#include "Forma.h"
#include "Rectangulo.h"
using namespace std;

int main(){
    Punto p1(4,5);
    p1.imprimirPunto();
    cout<<endl;
    Forma f1("Amarillo",0,0,"Rombo");
    f1.imprimir();
    cout<<endl;
    f1.obtenerCambiarColor("Anaranjado");
    cout<<endl;
    f1.moverCentro();
    cout<<endl;
    f1.imprimir();
    cout<<endl;
    Rectangulo r1("Rojo",4,5,"Rectangulo",10,7);
    r1.imprimir();
    cout<<"El area del Rectangulo es: "<<r1.area()<<endl;
    cout<<"El perimetro del Rectangulo es: "<<r1.perimetro()<<endl;
    return 0;
}
