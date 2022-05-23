#include <iostream>
#include "ClaseMultimedia.h"
using namespace std;

class ClaseDisco : public ClaseMultimedia
{
private:
    string tam;
public:
    ClaseDisco(string,string,int,string);
    ~ClaseDisco();
    void mostrarDatos();
};

ClaseDisco::ClaseDisco(string autor,string cancion, int anio, string tam)
: ClaseMultimedia(autor,cancion,anio)
{
    this->tam = tam;
}

ClaseDisco::~ClaseDisco()
{
}

void ClaseDisco::mostrarDatos(){
    cout<<"Autor: "<<getAutor()<<endl;
    cout<<"Cancion: "<<getCancion()<<endl;
    cout<<"Año: "<<getAnio()<<endl;
    cout<<"Tamaño del Disco: "<<tam<<endl;
}