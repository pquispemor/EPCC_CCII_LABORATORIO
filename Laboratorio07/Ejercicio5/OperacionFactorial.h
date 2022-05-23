#include <iostream>
#include "OperacionBase.h"
using namespace std;

class OperacionFactorial : public OperacionBase
{
private:
    /* data */
public:
    OperacionFactorial(/* args */);
    ~OperacionFactorial();
    int devolverFactorial();
};

OperacionFactorial::OperacionFactorial(/* args */)
{
}

OperacionFactorial::~OperacionFactorial()
{
}
