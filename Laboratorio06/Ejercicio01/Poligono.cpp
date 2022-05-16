#include "Poligono.h"

Poligono::Poligono(int _base, int _altura){
    base = _base;
    altura = _altura;
}

Poligono::~Poligono(){

}

int Poligono::area(){
    return base*altura;
}

int Poligono::perimetro (){
    return (2*base)+(2*altura);
}