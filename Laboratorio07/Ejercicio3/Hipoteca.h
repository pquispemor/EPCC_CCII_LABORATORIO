#include <iostream>
#include "Prestamo.h"
using namespace std;

class Hipoteca : public Prestamo
{
private:
    /* data */
public:
    Hipoteca(/* args */);
    Hipoteca(string,double);
    ~Hipoteca();
    void imprimir();
};

Hipoteca::Hipoteca(/* args */)
{
}

Hipoteca::Hipoteca(string cliente, double saldo): Prestamo(cliente,saldo){}

Hipoteca::~Hipoteca(){}

void Hipoteca::imprimir(){
    cout<<"Hipoteca: \n";
    ProductoBancario::imprimir();
}