#include <iostream>
#include "Alumno.h"
using namespace std;

int main(){
    int nroAlumnos;
    int edad;
    string nombre;
    cout<<"Indique la Cantidad de Alumnos: ";
    cin>>nroAlumnos;
    Alumno* alumnos;
    alumnos = new Alumno[nroAlumnos];
    for (int i = 0; i < nroAlumnos; i++)
    {
        cout<<"Alumno Nro: "<<i+1<<endl;
        cin.ignore();
        cout<<"Nombre: ";
        getline(cin,nombre);
        cout<<"Edad: ";
        cin>>edad;
        alumnos[i].setNombre(nombre);
        alumnos[i].setEdad(edad);
    }
    
    cout << "\n\tDatos de los Alumnos :\n";
    for (int i = 0; i < nroAlumnos; i++)
    {
        cout<<"Alumno Nro: "<<i+1<<endl;
        alumnos[i].mostrarDatos();
    }
    
    delete[] alumnos;
    return 0;
}