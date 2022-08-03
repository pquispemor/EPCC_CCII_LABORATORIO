#include "Suma.h"
#include "Resta.h"
#include "Multiplicacion.h"
#include "Division.h"
#include <iostream>

int Menu() {
    int opcion;
    do
    {
        std::cout << "\tMENU\n";
        std::cout << " [1] SUMA" << std::endl;
        std::cout << " [2] RESTAR" << std::endl;
        std::cout << " [3] MULTIPLICAR" << std::endl;
        std::cout << " [4] DIVIDIR" << std::endl;
        std::cout << " [5] Salir" << std::endl;
        std::cout << "Opcion : ";
        std::cin >> opcion;
        if ((opcion < 1) || (opcion > 5)) {
            system("cls");
            std::cout << "Opcion invalida\n";
            std::cout << "\n\nPresione cualquier tecla para continuar...";
            std::system("pause");
            system("cls");
        }
    } while ((opcion < 1) || (opcion > 5));
    return opcion;
}

int main (){
    int opcion, x, y;
    do
    {
        opcion = Menu();
        if (opcion == 1){
            std::cout << "Ingrese los datos que desea Sumar\n";
            std::cout << "Primer dato: ";
            std::cin >> x;
            std::cout << "Segundo dato: ";
            std::cin >> y;
            Suma<int> r1(x,y);
            std::cout << "--------------------------------------------\n";
            std::cout << "La Suma es: " << r1.resultado() << std::endl;   
        }
        else if (opcion == 2){
            std::cout << "Ingrese los datos que desea Restar\n";
            std::cout << "Primer dato: ";
            std::cin >> x;
            std::cout << "Segundo dato: ";
            std::cin >> y;
            Resta<int> r2(x,y);
            std::cout << "--------------------------------------------\n";
            std::cout << "La Resta es: " << r2.resultado() << std::endl;   
        }
        else if (opcion == 3){
            std::cout << "Ingrese los datos que desea Multiplicar\n";
            std::cout << "Primer dato: ";
            std::cin >> x;
            std::cout << "Segundo dato: ";
            std::cin >> y;
            Multiplicacion<int> r3(x,y);
            std::cout << "--------------------------------------------\n";
            std::cout << "La Multiplicacion es: " << r3.resultado() << std::endl;  
        }
        else if (opcion == 4){
            std::cout << "Ingrese los datos que desea Dividir\n";
            std::cout << "Primer dato: ";
            std::cin >> x;
            std::cout << "Segundo dato: ";
            std::cin >> y;
            Division<int> r4(x,y);
            std::cout << "--------------------------------------------\n";
            std::cout << "La Division es: " << r4.resultado() << std::endl;   
        }
        else if (opcion == 5){
            std::cout << "Fin" << std::endl;
            std::cout << "\n\nPresione cualquier tecla para continuar..."; 
        }
        std::system("pause");
        std::system("cls");
    } while (opcion !=5);
    return 0;
}