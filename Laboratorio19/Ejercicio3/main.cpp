#include <iostream>
#include <algorithm>
#include <random>
#include <vector>
#include <ctime>


class Elementos{
public:
    int a;
    int b;
};

class funtorSort{
public:
    bool operator()(Elementos e1, Elementos e2){
        return e1.a <= e2.b;
    }
};

void imprimir(std::vector<Elementos> datos){
    std::cout << "[";
    for (auto i = datos.begin(); i < datos.end(); i ++){
        std::cout << "(" << i->a << "," << i->b << ") ; ";
    }
    std::cout << "\n";
}

int main(){
    std::vector<Elementos> datos;
    std::mt19937 gen(time(0));
    std::uniform_int_distribution<> rand_digits(1,99);

    for (int i=0; i<20; i++){
        Elementos dato;
        dato.a = rand_digits(gen);
        dato.b = rand_digits(gen);
        datos.push_back(dato);
    }
    std::cout << "-------------------------------------------------------------------\n";
    std::cout << "VECTOR: \n";
    imprimir(datos);

    std::cout << "--------------------------------------------------------------------\n";
    std::cout << "ORDENAMIENTO SORT CON FUNCTOR Tipo de ordenamiento (Obj1.a < Obj2.b)\n";
    std::sort(datos.begin(), datos.end(), funtorSort());

    imprimir(datos);

    return 0;
}

