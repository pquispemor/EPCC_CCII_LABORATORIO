#include <iostream>
#include "fecha.h"
using namespace std;

fecha::fecha(string _nombre, int _dia, int _mes, int _anio ){
    nombre = _nombre;
    dia = _dia;
    mes = _mes;
    anio = _anio;
}
fecha::~fecha(){

}
void fecha::setnombre(string nom){
    nombre = nom;
}
string fecha::getnombre(){
    return nombre;
}

int fecha::edad(fecha& d){
    if (d.mes > mes)
        return d.anio - anio;
    else
        return d.anio - anio - 1;
}