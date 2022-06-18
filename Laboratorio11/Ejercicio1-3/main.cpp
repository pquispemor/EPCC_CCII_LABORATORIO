#include <iostream>
#include "Nodo.h"
#include "Pila.h"
#include "windows.h"
#include "conio.h"

using namespace std;

int Menu(){
    int opcion;
    do
    {
        cout<<"\tMENU\n";

        //!Ejercicio N°1
        cout << " [1] Insertar nuevo nodo a la Pila" << endl;
        cout << " [2] Mostrar Pila" << endl;

        //!Ejercicio N°2
        cout << " [3] Eliminar Nodo de la Pila" << endl;
        
        //!Ejercicio N°3
        cout << " [4] Buscar un Nodo en la Pila" << endl;
        cout << " [5] Salir" << endl;
        cout<<"Opcion : ";
        cin>>opcion;
        if ((opcion < 1) || (opcion > 5)){
            system("cls");
            cout<<"Opcion invalida\n";
            cout << "\n\nPresione cualquier tecla para continuar...";
            getch();
            system("cls");
        }
    } while ((opcion < 1) || (opcion > 5));
    return opcion;
}

int main(){
    int opcion;
    Pila p = Pila();
    do
    {
        opcion = Menu();
        system("cls");
        switch (opcion){
            //!Ejercicio N°1
            case 1:
                int n;
                cout << "Ingrese el nuevo dato :" << endl;
                cin >> n;
                p.Push(n);
                break;
            
            case 2:
                cout << "Pila: " << endl;
                p.imprimir();
                break;

            //!Ejercicio N°2
            case 3:
                p.PopEliminar();
                break;

            //!Ejercicio N°3
            case 4:
                int d;
                cout << "Ingrese el dato que desea buscar :" << endl;
                cin >> d;
                p.PopBuscar(d);
                break;
            
            case 5:
                cout << "Fin" << endl;
                cout << "\n\nPresione cualquier tecla para continuar..."; 
                break;
        }
        getch();
        system("cls");
    } while (opcion != 5);
    

    return 0;
}