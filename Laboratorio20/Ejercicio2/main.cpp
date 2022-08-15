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
    std::unique_ptr<double> d = std::make_unique<double>(1.0);
    std::unique_ptr<Point> pt = std::make_unique<Point>(1.0, 2.0);
    std::cout << "Double : " << *d << std::endl;
    std::cout << "Point : ";
    pt->Imprimir();
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

    return 0;
}