#include <iostream>
using namespace std;

struct alumno{
    string nombre;
    char grupo;
    float nota1, nota2, nota3, notaPF;
};

int main(){
    int n;
    cout << "Indicar la cantidad de alumnos: \n";
    cin >> n;

    struct alumno a[n];
    float promedio[n];
    cout << "-------------------------------\n";
    cout << "Ingrese las notas de los alumnos: \n";
    for(int i=0; i<n; i++){
        cout << "Alumno : [" << i+1 << "]" << endl;
        cout << "Ingrese el nombre del alumno: \n";
        cin.ignore();
        getline(cin,a[i].nombre);
        cout << "Ingrese el grupo de estudios: \n";
        cin >> a[i].grupo;
        cout << "Ingrese la nota de la primera fase: \n";
        cin >> a[i].nota1;
        cout << "Ingrese la nota de la segunda fase: \n";
        cin >> a[i].nota2;
        cout << "Ingrese la nota de la tercera fase: \n";
        cin >> a[i].nota3;
        cout << "Ingrese la nota del proyecto final: \n";
        cin >> a[i].notaPF;
        cout << "-------------------------------\n";

        promedio[i] = (a[i].nota1*0.15) + (a[i].nota2*0.2) + (a[i].nota3*0.25) + (a[i].notaPF*0.4);
    }
    cout << "-------------------------------\n";
    cout << "Notas: \n";
    for(int i=0; i<n; i++){
        cout << "Alumno : [" << i+1 << "]" << endl;
        cout << "Nombre: " << a[i].nombre << " , Grupo : " << a[i].grupo << endl;
        cout << "Promedio de Notas : " << promedio[i] << endl;
        cout << endl;
    }
    
    return 0;
}