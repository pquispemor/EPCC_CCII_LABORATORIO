#include <iostream>
using namespace std;

struct empleado{
    string nombre;
    char sexo;
    float sueldo;
};

int main(){
    int n;
    int mayor, menor;
    int indiceMayor, indiceMenor;
    cout << "Indicar la cantidad de empleados: \n";
    cin >> n;
    struct empleado em[n];
    cout << "-------------------------------\n";
    cout << "Ingrese los datos de los empleados: \n";
    for(int i=0; i<n; i++){
        cout << "Empleado : [" << i+1 << "]" << endl;
        cout << "Ingrese el nombre del empleado: \n";
        cin.ignore();
        getline(cin,em[i].nombre);
        cout << "Ingrese el sexo del empleado 'H' o 'M': \n";
        cin >> em[i].sexo;
        cout << "Ingrese el sueldo del empleado: \n";
        cin >> em[i].sueldo;
        cout << "-------------------------------\n";
        
    }
    menor = em[0].sueldo;
    mayor = em[0].sueldo;
    for(int i=0; i<n; i++){
        if(em[i].sueldo >= mayor){
            mayor = em[i].sueldo;
            indiceMayor = i;
        }
        if(em[i].sueldo <= menor){
            menor = em[i].sueldo;
            indiceMenor = i;
        }
    }
    cout << "-------------------------------\n";
    cout << "Empleado con menor sueldo : \n";
    cout << "Nombre: " << em[indiceMenor].nombre << endl;
    cout << "Sueldo: " << em[indiceMenor].sueldo << endl;
    cout << "-------------------------------\n";
    cout << "Empleado con mayor sueldo : \n";
    cout << "Nombre: " << em[indiceMayor].nombre << endl;
    cout << "Sueldo: " << em[indiceMayor].sueldo << endl;
    
    return 0;
}