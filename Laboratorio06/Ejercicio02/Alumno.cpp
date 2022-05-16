#include "Alumno.h"

Alumno::Alumno(int _CUI, string _nombre, float _notas[]){
    CUI = _CUI;
    nombre = _nombre;
    notas[0] = _notas[0];
    notas[1] = _notas[1];
    notas[2] = _notas[2];
}
Alumno::~Alumno(){
}

int Alumno::getcui(){
    return CUI;
}

void Alumno::getnombre(){
	int tam = nombre.size();
	cout << "El nombre es: ";
	for (int i = 0; i < tam; i++){
		cout << nombre[i];
		if (nombre[i] == ' ')
			break;
	}
}

float Alumno::promedio(){
    return (notas[0]+notas[1]+notas[2])/3;
}

bool Alumno::resultado(float prom){
    if (prom >= 10.5)
        return true;
    else    
        return false;
}
