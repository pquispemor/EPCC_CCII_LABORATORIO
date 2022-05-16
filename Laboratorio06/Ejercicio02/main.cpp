#include "Alumno.h"
#include <iostream>

using namespace std;

int main(){
    float A[3] = {15,18,14};
    string nom = "Paul Jesus Quispe Morocco";
    Alumno a1 = Alumno(20190741, nom, A);
    cout << "El cui del Alumno es: " << a1.getcui() << endl;
    a1.getnombre();
    cout << "\nEl promedio es: " << a1.promedio() << endl;
    if (a1.resultado(a1.promedio()) == true)
    	cout << "El alumno esta aprobado" << endl;
    else
    	cout << "El alumno esta desaprobado" << endl;
    return 0;
}