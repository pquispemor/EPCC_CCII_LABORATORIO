#include <iostream>
#include "ProductoBancario.h"
using namespace std;

class Prestamo : protected ProductoBancario
{
private:
    /* data */
public:
    Prestamo(/* args */);
    Prestamo(string,double);
    ~Prestamo();
    void imprimir();
};

Prestamo::Prestamo(/* args */)
{
}

Prestamo::Prestamo(string cliente, double saldo): ProductoBancario(cliente,saldo){}

Prestamo::~Prestamo(){}

void Prestamo::imprimir(){
    cout<<"Prestamo: \n";
    ProductoBancario::imprimir();
}
