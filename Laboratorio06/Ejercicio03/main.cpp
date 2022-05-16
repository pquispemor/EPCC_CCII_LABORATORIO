#include <iostream>
#include "fecha.h"
using namespace std;

int main(){
    fecha* nacimiento;
    fecha* hoy;
    string nom;
    int d, m, a;
    cout << "Por favor introduzca su nombre : ";
    getline(cin,nom);
    nacimiento->setnombre(nom);
    cout << "Por favor indroduzca su fecha de nacimiento, dia : ";
    cin >> d;
    cout << "Mes: ";
    cin >> m;
    cout << "Anio: ";
    cin >> a;
    nacimiento = new fecha(nom,d,m,a);

    cout << "Por favor indroduzca la fecha de hoy, dia : ";
    cin >> d;
    cout << "Mes: ";
    cin >> m;
    cout << "Anio: ";
    cin >> a;
    hoy = new fecha(nom,d,m,a);

    // Resultados
    cout << "Su nombre es: " << nacimiento->getnombre() << endl;
    cout << "Usted tiene: " << nacimiento->edad(*hoy) << " anios" << endl;

}
