#include <iostream>
#include "windows.h"
#include "conio.h"

using namespace std;

struct Producto{
    string nombre;
    float precio;
    int cantidad;
};

int Menu(){
    int opcion;
    do
    {
        cout<<"\tMENU\n";
        cout << " [1] Dar de alta un producto" << endl;
        cout << " [2] Dar de baja a un producto" << endl;
        cout << " [3] Buscar un producto por su nombre" << endl;
        cout << " [4] Modificar el nombre, precio o cantidad de un producto" << endl;
        cout << " [5] Mostrar Productos" << endl;
        cout << " [6] Salir" << endl;
        cout<<"Opcion : ";
        cin>>opcion;
        if ((opcion < 1) || (opcion > 6)){
            system("cls");
            cout<<"Opcion invalida\n";
            cout << "\n\nPresione cualquier tecla para continuar...";
            getch();
            system("cls");
        }
    } while ((opcion < 1) || (opcion > 6));
    return opcion;
}

void DarDeAlta (Producto**, int);
void DarDeBaja (Producto**, int);
int BuscarProducto (Producto**);
void ModificarProducto (Producto**);
void MostrarDatos (Producto**);

int main(){   
    int cantidadTotal = 0;
    struct Producto** pDoble = new Producto* [10];
    for(int i = 0; i < 10; i++) {
        pDoble[i] = new Producto[3];
    }
    for(int i = 0; i < 10; i++){
        for (int j = 0; j < 3; j++) {
            (*(pDoble+i)+j)->nombre = "vacio";
            (*(pDoble+i)+j)->precio = 0;
            (*(pDoble+i)+j)->cantidad = 0;
        }
    }
    int opcion;  
    int indice;
    int k;
    do
    {
        opcion = Menu();
        system("cls");
        switch (opcion){
            case 1:
                if (cantidadTotal < 10){
                    DarDeAlta(pDoble,cantidadTotal);
                    cantidadTotal++;    
                }
                else{
                    cout << "Ya no se pueden agregar mas productos\n";
                    cout << "Elimine algunos para seguir agregando\n";
                    cout << "\n\nPresione cualquier tecla para continuar..."; 
                }
                break;
            case 2:
                if (cantidadTotal == 0){
                    cout << "No se encontro ningun producto para eliminar\n";
                    cout << "\n\nPresione cualquier tecla para continuar..."; 
                }
                else{
                    DarDeBaja(pDoble,cantidadTotal);
                    cantidadTotal--;
                }
                break;
            case 3:
                k = 0;
                indice = BuscarProducto(pDoble);
                if (indice == 11){
                    cout << "================================\n";
                    cout << "Producto no encontrado" << endl;
                    cout << "\n\nPresione cualquier tecla para continuar..."; 
                }
                else{
                    cout << "================================\n";
                    cout << "\tProducto Encontrado\n";
                    cout << "Nombre: " << (*(pDoble+indice)+k)->nombre << endl;k++;
                    cout << "Precio: " << (*(pDoble+indice)+k)->precio << endl;k++;
                    cout << "Cantidad: " << (*(pDoble+indice)+k)->cantidad << endl;
                    cout << "\n\nPresione cualquier tecla para continuar...";
                } 
                break;  
            case 4:
                ModificarProducto(pDoble);
                break;
            case 5:
                MostrarDatos(pDoble);
                break;
            case 6:
                cout << "Fin" << endl;
                cout << "\n\nPresione cualquier tecla para continuar..."; 
                break;
        }
        getch();
        system("cls");
    } while (opcion != 6);
    

    for (int i = 0; i < 10; i++)
    {
        delete [] pDoble[i];
    }

    delete [] pDoble;
    
    return 0;
}
void DarDeAlta (Producto** pDoble, int cantidadTotal){
    int j = 0;
    cout << "Introduzca el nombre del producto: \n";
    cin.ignore();
    getline(cin, (*(pDoble+cantidadTotal)+j)->nombre);
    j++;
    cout << "Introduzca el precio del producto: \n";
    cin >> (*(pDoble+cantidadTotal)+j)->precio;
    j++;
    cout << "Introduzca la cantidad del producto: \n";
    cin >> (*(pDoble+cantidadTotal)+j)->cantidad;
    j++;

    cout << "Producto Creado\n";
    cout << "\n\nPresione cualquier tecla para continuar..."; 
}


void DarDeBaja (Producto** pDoble, int cantidadTotal){
    int j = 0;
    int indice = BuscarProducto(pDoble);
    if (cantidadTotal == 1){
        (*(pDoble+0)+j)->nombre = "vacio";
        j++;
        (*(pDoble+0)+j)->precio = 0;
        j++;
        (*(pDoble+0)+j)->cantidad = 0;        
    }
    else{
        (*(pDoble+indice)+j)->nombre = "vacio";
        j++;
        (*(pDoble+indice)+j)->precio = 0;
        j++;
        (*(pDoble+indice)+j)->cantidad = 0;
        for (int i = indice; i < 10 - indice; i++){
            for (int k = 0; k < 3; k++){
                (*(pDoble+i)+k)->nombre = (*(pDoble+(i+1))+k)->nombre;
                (*(pDoble+i)+k)->precio = (*(pDoble+(i+1))+k)->precio;
                (*(pDoble+i)+k)->cantidad = (*(pDoble+(i+1))+k)->cantidad;
            }
        }        
    }
    cout << "Producto Eliminado con exito\n";
    cout << "\n\nPresione cualquier tecla para continuar...";    
}

int BuscarProducto (Producto** pDoble){
    string buscar = "";
    int a = 11;
    cout << "Ingrese el nombre del producto que desea buscar: \n";
    cin.ignore();
    getline(cin, buscar);
    for(int i = 0; i < 10; i++){
        for (int j = 0; j < 3; j++) {
            if ((*(pDoble+i)+j)->nombre == buscar)
                a=i;
        }
    }
    return a;
    
}
void ModificarProducto (Producto** pDoble){
    int j = 0;
    int indice = BuscarProducto(pDoble);
    cout << "Introduzca el nuevo nombre del producto: \n";
    cin.ignore();
    getline(cin, (*(pDoble+indice)+j)->nombre);
    j++;
    cout << "Introduzca el nuevo precio del producto: \n";
    cin >> (*(pDoble+indice)+j)->precio;
    j++;
    cout << "Introduzca la nuevo cantidad del producto: \n";
    cin >> (*(pDoble+indice)+j)->cantidad;
    j++;
    cout << "Producto Modificado con exito\n";
    cout << "\n\nPresione cualquier tecla para continuar..."; 

}

void MostrarDatos(Producto** pDoble){
    int j;
    string s = "vacio";
    for(int i = 0; i < 10; i++){
        j = 0;
        if ((*(pDoble+i)+j)->nombre != s){
            cout << "================================\n";
            cout << "Producto : " << i+1 << endl;
            cout << "Nombre: " << (*(pDoble+i)+j)->nombre << endl;
            j++;
            cout << "Precio: " << (*(pDoble+i)+j)->precio << endl;
            j++;
            cout << "Cantidad: " << (*(pDoble+i)+j)->cantidad << endl; 
            cout << "================================\n";    
        }
    }

    cout << "\n\nPresione cualquier tecla para continuar..."; 
}