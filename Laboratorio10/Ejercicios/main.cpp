#include <iostream>
#include "Nodo.h"
#include "Lista.h"
using namespace std;

int Menu(){
    int opcion;
    do
    {
        cout<<"\tMENU\n";
        cout<<"1. Insertar al Final\n";
        cout<<"2. Insertar al Inicio\n";
        cout<<"3. Insertar al Medio\n";
        cout<<"4. Eliminar ultimo Elemento\n";
        cout<<"5. Eliminar primer Elemento\n";
        cout<<"6. Eliminar cualquier Elemento\n";
        cout<<"7. Ordenamiento Ascendente\n";
        cout<<"8. Ordenamiento Descendente\n";
        cout<<"9. Mostrar\n";
        cout<<"10. Salir\n\n";
        cout<<"Opcion : ";
        cin>>opcion;
        if ((opcion < 1) || (opcion > 10))
            cout<<"Opcion invalida\n";
    } while ((opcion < 1) || (opcion > 10));

    return opcion;
}

int main(){
    int opcion;
    Nodo* aux = NULL, * aux2=NULL;
    Lista l1;
    int dato;
    do
    {
        opcion = Menu();
        switch (opcion)
        {
        //EJERCICIO 1
        case 1:
            cout<<"\tInsertar al Final:\n";
            aux = new Nodo();
            cout<<"Ingrese el nuevo dato: ";
            cin>>dato;
            aux->setDato(dato);
            l1.InsertarUltimo(aux);
            cout<<"Dato guardado\n";
            break;
        //EJERCICIO 2
        case 2:
            cout<<"\tInsertar al Inicio:\n";
            cout<<"Ingrese el nuevo dato: ";
            cin>>dato;
            l1.InsertarInicio(dato);
            cout<<"Dato guardado\n";
            break;

        //EJERCICIO 3
        case 3:
            cout<<"\tInsertar al Medio:\n";
            cout<<"Ingrese el nuevo dato: ";
            cin>>dato;
            l1.InsertarMedio(dato);
            cout<<"Dato guardado\n";
            break;

        //EJERCICIO 4
        case 4:
            cout<<"\tEliminar ultimo Elemento:\n";
            aux2 = l1.getInicio();
            if (aux2 != NULL){
                l1.EliminarUltimo();
                cout<<"Dato eliminado\n";
            }
            else
                cout<<"La lista esta vacia\n";
            break;
        
        //EJERCICIO 5
        case 5:
            cout<<"\tEliminar primer Elemento:\n";
            aux2 = l1.getInicio();
            if (aux2 != NULL){
                l1.EliminarInicio();
                cout<<"Dato eliminado\n";
            }
            else
                cout<<"La lista esta vacia\n";
            break;

        //EJERCICIO 6
        case 6:
            cout<<"\tEliminar cualquier Elemento:\n";
            cout<<"Por favor ingrese el numero  que desea eliminar: ";
            cin>>dato;
            aux2 = l1.Buscar(dato);
            if (aux2 != NULL){
                l1.Eliminar(dato);
                cout<<"Dato eliminado";
            }
            else
                cout<<"El numero no se encontro o no existe\n";
            break;

        //EJERCICIO 7
        case 7:
            cout<<"\tOrdenamiento Ascendente:\n";
            l1.ordenAscendente();
            break;

        //EJERCICIO 8
        case 8:
            cout<<"\tOrdenamiento Descendente:\n";
            l1.ordenDescendente();
            break;


        case 9:
            cout<<"\tMostrar:\n";
            aux2 = l1.getInicio();
            while (aux2 != NULL)
            {
                cout<<aux2->getDato();
                aux2 = aux2->getSiguiente();
                cout<<"->";
            }
            cout<<endl;
            break;
        
        
        case 10:
            cout<<"Fin";
            delete aux2;
            break;
        }
    } while (opcion != 10);
    

    return 0;
}
