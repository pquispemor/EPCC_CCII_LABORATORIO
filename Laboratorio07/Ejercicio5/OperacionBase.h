#include <iostream>
using namespace std;

class OperacionBase
{
protected:
    int operador;
public:
    OperacionBase(/* args */);
    OperacionBase(int);
    ~OperacionBase();
    void setOperator(int);
    int getOperator();
};

OperacionBase::OperacionBase(/* args */){}

OperacionBase::OperacionBase(int operador){
    this->operador = operador;
}
OperacionBase::~OperacionBase(){}

void OperacionBase::setOperator(int operador){
    this->operador = operador;
}

int OperacionBase::getOperator(){
    return operador;
}