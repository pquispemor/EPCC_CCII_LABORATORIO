#include <iostream>
#include "Persona.h"
using namespace std;

class Alumno : public Persona
{
private:
    /* data */
public:
    Alumno();
    ~Alumno();
    void mostrarDatos();
};
Alumno::Alumno(){}

Alumno::~Alumno(){}

void Alumno::mostrarDatos(){
    cout<<"Nombre: "<<Persona::getNombre()<<endl;
    cout<<"Edad: "<<Persona::getEdad()<<endl;
}
