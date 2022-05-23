#include <iostream>
#include "ProductoBancario.h"
using namespace std;

class Cuenta : public ProductoBancario
{
private:
    
public:
    Cuenta();
    Cuenta(string,double);
    ~Cuenta();
    void imprimir();
};

Cuenta::Cuenta(/* args */){}

Cuenta::Cuenta(string cliente, double saldo): ProductoBancario(cliente,saldo){}
Cuenta::~Cuenta(){}

void Cuenta::imprimir(){
    cout<<"Cuenta: \n";
    ProductoBancario::imprimir();
}
