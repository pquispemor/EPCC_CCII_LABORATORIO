#include <iostream>
using namespace std;

class ClaseMultimedia
{
private:
    string autor, cancion;
    int anio;
public:
    ClaseMultimedia(string,string,int);
    ~ClaseMultimedia();
    string getAutor(){
        return autor;
    }
    string getCancion(){
        return cancion;
    }
    int getAnio(){
        return anio;
    }
};

ClaseMultimedia::ClaseMultimedia(string autor,string cancion, int anio)
{
    this->autor = autor;
    this->cancion = cancion;
    this->anio = anio;
}

ClaseMultimedia::~ClaseMultimedia()
{
}

