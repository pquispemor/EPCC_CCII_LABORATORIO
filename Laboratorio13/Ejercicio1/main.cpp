#include <iostream>
using namespace std;

struct cumpleanios{
    string nombre;
    int dia;
    int mes;
};

int main(){
    int n;
    cout << "Indicar la cantidad de personas: \n";
    cin >> n;

    struct cumpleanios c[n];
    cout << "-------------------------------\n";
    cout << "Ingrese los datos de las personas: \n";
    for(int i=0; i<n; i++){
        cout << "Persona : " << i+1 << "]" << endl;
        cout << "Ingrese el nombre de la persona: \n";
        cin.ignore();
        getline(cin,c[i].nombre);
        cout << "Ingrese el dia que cumpleanios: \n";
        cin >> c[i].dia;
        cout << "Ingrese el mes que cumpleanios: \n";
        cin >> c[i].mes;
        cout << "-------------------------------\n";
    }
    cout << "-------------------------------\n";
    cout << "Estas personas cumplenanios Hoy: \n";
    for(int i=0; i<n; i++){
        if(c[i].dia == 21 && c[i].mes == 6){
            cout << "Feliz Cumpleanio : " << c[i].nombre << endl;
        }
    }
    

    return 0;
}