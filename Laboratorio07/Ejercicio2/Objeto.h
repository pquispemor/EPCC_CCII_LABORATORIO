#include <iostream>
#include "Color.h"
#include "Material.h"
using namespace std;

class Objeto : public Color, Material
{
private:
    string nombre;
public:
    Objeto();
    Objeto(int,int,int,string,string);
    ~Objeto();
    void mostrarDatos();

};

Objeto::Objeto(){}
Objeto::Objeto(int red, int green, int blue, string mat, string nombre)
: Color(red,green,blue), Material(mat)
{
    this->nombre = nombre;
}
Objeto::~Objeto(){}

void Objeto::mostrarDatos(){
    cout<<"Objeto: "<<nombre<<endl;;
    cout<<"Color RGB: "<<endl;
    cout<<"Rojo: "<<getRed()<<endl;
    cout<<"Green: "<<getGreen()<<endl;
    cout<<"Blue: "<<getBlue()<<endl;
    cout<<"Material: "<<getMaterial()<<endl;
}
