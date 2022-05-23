#include <iostream>
using namespace std;

class Persona
{
private:
    int edad;
    string nombre;
public:
    Persona();
    ~Persona();
    void setEdad(int);
    void setNombre(string);
    int getEdad();
    string getNombre();
    void mostrarDatos();
};

Persona::Persona()
{
}

Persona::~Persona()
{
}

void Persona::setEdad(int edad){
    this->edad = edad;
}

void Persona::setNombre(string nombre){
    this->nombre = nombre;
}

int Persona::getEdad(){
    return edad;
}

string Persona::getNombre(){
    return nombre;
}