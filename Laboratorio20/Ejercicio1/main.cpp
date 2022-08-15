#include <iostream>
#include <memory>

//Clase Point
class Point{
private:
    //Atributos
    double x{};
    double y{};
public:
    //Constructor
    Point(double x, double y){
        this-> x = x;
        this-> y = y;
    }
    //Metodos Set
    void X(double x){ this-> x = x;}
    void Y(double y){ this-> y = y;}
    //Metodo Print
    void Imprimir(){
        std::cout << "(" << x << " , " << y << ")\n";
    }
};

int main(){
    /* Se crea un valor de tipo double del cual su direccion de memoria
    se almacena en el puntero d */
    double* d = new double(1.0);
    std::cout << "Double : " << *d << std::endl;
    /* Se crea un valor de tipo Point del cual su direccion de memoria
    se almacena en el puntero pt */
    Point* pt = new Point(1.0, 2.0);
    std::cout << "Point : ";
    pt->Imprimir();
    // Se modifica el valor de double
    *d = 2.0;
    std::cout << "Double Modificado : " << *d << std::endl;
    // Se modifican los valores de tipo Point usando sus metodos de clase
    (*pt).X(3.0);
    (*pt).Y(3.0);
    std::cout << "Point Modificado: ";
    pt->Imprimir();

    // Se modifican los valores de tipo Point usando sus metodos de clase
    // en este caso se utiliza el operador flecha
    pt->X(3.0);
    pt->Y(3.0);

    // Liberacion de memoria
    delete d;
    delete pt;

    return 0;
}