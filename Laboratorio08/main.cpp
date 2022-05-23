#include <iostream>
#include "Forma.h"
#include "Rectangulo.h"
#include "Cuadrado.h"
#include "Elipse.h"
#include "Circulo.h"
using namespace std;

int main(){
    Punto p1(4,5);
    p1.imprimirPunto();
    cout<<endl;
    /* No se permiten objetos Forma despues de volverlo abstracto
    Forma f1("Amarillo",0,0,"Rombo");
    f1.imprimir();
    cout<<endl;
    cout<<"Cambiando Color: \n\n";
    f1.obtenerCambiarColor("Anaranjado");
    f1.imprimir();
    cout<<endl;
    f1.moverCentro();
    cout<<endl;
    f1.imprimir();
    cout<<endl;
    /*Rectangulo r1("Rojo",4,5,"Rectangulo",10,7);
    r1.imprimir();
    cout<<"El area del Rectangulo es: "<<r1.area()<<endl;
    cout<<"El perimetro del Rectangulo es: "<<r1.perimetro()<<endl;
    */
    Forma* formas[4];
    cout<<"\n\tPregunta 5: \n";
    //Creando diferentes formas
    formas[0] = new Rectangulo("Rojo",4,5,"Rectangulo",10,7);
    formas[1] = new Elipse("Amarillo",3,2,"Elipse",4.5,2.3);
    formas[2] = new Cuadrado("Cafe",3,4,"Cuadrado",4,4);
    formas[3] = new Circulo("Azul",2,1,"Circulo",2.5,2.5);
    string newColor;
    cout<<"\nIndique el nuevo color para todas las formas: ";
    cin.ignore();
    getline(cin,newColor);
    for (int i = 0; i < 4; i++){
        formas[i]->obtenerCambiarColor(newColor);
    }
    float x,y;
    
    for (int i = 0; i < 4; i++)
    {
        cout<<"\nIndique la posicion a donde quiere mover la forma: "<<formas[i]->getNombre()<<endl;
        formas[i]->moverCentro();
        cout<<endl;
    }

    cout<<"\nFormas alteradas: \n";
    for (int i = 0; i < 4; i++)
    {
        formas[i]->imprimir();
        cout<<endl;
    }

    cout<<"\n\tPregunta 7: \n";
    cout<<"\nArea de las diferentes Formas: \n";
    float areaMayor = formas[0]->area();
    int indice = 0;
    for (int i = 0; i < 4; i++)
    {
        cout<<"El Area del "<<formas[i]->getNombre()<<" es: "<<formas[i]->area();
        cout<<endl;
        if (areaMayor < formas[i]->area())
        {
            indice = i;
        }
    }
    cout<<"\n\tPregunta 8: \n";
    cout<<"\nEl Area Mayor es el de la figura : "<<formas[indice]->getNombre()<<" y su Area es: "<<formas[indice]->area();
    return 0;
}
