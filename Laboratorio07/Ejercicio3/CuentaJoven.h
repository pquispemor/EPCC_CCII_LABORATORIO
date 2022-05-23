#include <iostream>
#include "Cuenta.h"
using namespace std;

class CuentaJoven : private Cuenta
{
private:
    /* data */
public:
    CuentaJoven(/* args */);
    CuentaJoven(string,double);
    ~CuentaJoven();
    void imprimir();
};

CuentaJoven::CuentaJoven(/* args */){}

CuentaJoven::CuentaJoven(string cliente, double saldo): Cuenta(cliente,saldo){}

CuentaJoven::~CuentaJoven(){}

void CuentaJoven::imprimir(){
    cout<<"Cuenta Joven: \n";
    ProductoBancario::imprimir();
}
