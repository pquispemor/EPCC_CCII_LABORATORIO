#include <iostream>
using namespace std;

struct jugador{
    string nombre;
    int edad;
    float talla;
};

int main(){
    int n = 10;
    struct jugador jug[n];
    cout << "-------------------------------\n";
    cout << "Ingrese los datos de los jugadores: \n";
    for(int i=0; i<n; i++){
        cout << "Jugador : [" << i+1 << "]" << endl;
        cout << "Ingrese el nombre del jugador: \n";
        cin.ignore();
        getline(cin,jug[i].nombre);
        cout << "Ingrese la edad del jugador: \n";
        cin >> jug[i].edad;
        cout << "Ingrese la talla del jugador: \n";
        cin >> jug[i].talla;
        cout << "-------------------------------\n";
    }
    cout << "-------------------------------\n";
    cout << "Jugadores menores de 20 anios y con una talla mayor a 1,70 mts: \n";
    for(int i=0; i<n; i++){
        if (jug[i].edad < 20 && jug[i].talla > 1.7){
            cout << "Jugador : [" << i+1 << "]" << endl;
            cout << "Nombre: " << jug[i].nombre << endl;
            cout << "Edad : " << jug[i].edad << " , Talla : " << jug[i].talla << endl;
            cout << endl;   
        }
    }
    
    return 0;
}