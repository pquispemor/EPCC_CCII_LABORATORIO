#ifndef PRODUCTOBANCARIO_H
#define PRODUCTOBANCARIO_H
#include <iostream>
using namespace std;

class ProductoBancario
{
private:
    string cliente;
protected:
    double saldo;
public:
    ProductoBancario();
    ProductoBancario(string,double);
    ~ProductoBancario();
    void imprimir();
    static int numProductos;

};
int ProductoBancario::numProductos = 0;
ProductoBancario::ProductoBancario(){}

ProductoBancario::ProductoBancario(string cliente, double saldo){
    this->cliente = cliente;
    this->saldo = saldo;
    numProductos++;
}
ProductoBancario::~ProductoBancario(){}

void ProductoBancario::imprimir(){
    cout<<"Cliente: "<<cliente<<endl;
    cout<<"Saldo: "<<saldo<<endl;
    cout<<"Numero de Productos: "<<numProductos<<endl;
}
#endif