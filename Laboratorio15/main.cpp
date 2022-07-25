#include <iostream>
#include "windows.h"
#include <conio.h>
#include "BuilderEspecifico.h"
#include "Automovil.h"
#include <string>

using namespace std;


int Menu() {
    int opcion;
    do
    {
        std::cout << "\tMENU\n";
        std::cout << " [1] Producir puertas" << std::endl;
        std::cout << " [2] Producir llantas" << std::endl;
        std::cout << " [3] Producir timon" << std::endl;
        std::cout << " [4] Producir asientos" << std::endl;
        std::cout << " [5] Producir motor" << std::endl;
        std::cout << " [6] Producir espejos" << std::endl;
        std::cout << " [7] Producir vidrios" << std::endl;
        std::cout << " [8] Crear Vehiculo y Mostrar Componentes" << std::endl;
        std::cout << " [9] Salir" << std::endl;
        std::cout << "Opcion : ";
        std::cin >> opcion;
        if ((opcion < 1) || (opcion > 9)) {
            system("cls");
            std::cout << "Opcion invalida\n";
            std::cout << "\n\nPresione cualquier tecla para continuar...";
            std::system("pause");
            system("cls");
        }
    } while ((opcion < 1) || (opcion > 9));
    return opcion;
}

int main() {
    int opcion;
    bool creado = false;
    BuilderEspecifico* be = new BuilderEspecifico();
    Automovil* a;
    std::string caract;
    do
    {
        opcion = Menu();
        std::system("cls");
        switch (opcion) {

        case 1:
            std::cout << "Ingrese el color de las puertas :" << std::endl;
            std::cin.ignore();
            getline(std::cin,caract);
            be->prodPuertas(caract);
            std::cout << "\n\nPresione cualquier tecla para continuar...";
            break;

        case 2:
            std::cout << "Ingrese el color de las llantas :" << std::endl;
            std::cin.ignore();
            getline(std::cin, caract);
            be->prodLlantas(caract);
            std::cout << "\n\nPresione cualquier tecla para continuar...";
            break;

        case 3:
            std::cout << "Ingrese el color del Timon :" << std::endl;
            std::cin.ignore();
            getline(std::cin, caract);
            be->prodPuertas(caract);
            std::cout << "\n\nPresione cualquier tecla para continuar...";
            break;

        case 4:
            std::cout << "Ingrese el color de los Asientos :" << std::endl;
            std::cin.ignore();
            getline(std::cin, caract);
            be->prodAsientos(caract);
            std::cout << "\n\nPresione cualquier tecla para continuar...";
            break;

        case 5:
            std::cout << "Ingrese el color del Motor :" << std::endl;
            std::cin.ignore();
            getline(std::cin, caract);
            be->prodMotor(caract);
            std::cout << "\n\nPresione cualquier tecla para continuar...";
            break;

        case 6:
            std::cout << "Ingrese el color de los espejos :" << std::endl;
            std::cin.ignore();
            getline(std::cin, caract);
            be->prodEspejos(caract);
            std::cout << "\n\nPresione cualquier tecla para continuar...";
            break;

        case 7:
            std::cout << "Ingrese el color de los vidrios :" << std::endl;
            std::cin.ignore();
            getline(std::cin, caract);
            be->prodVidrios(caract);
            std::cout << "\n\nPresione cualquier tecla para continuar...";
            break;

        case 8:
            a = be->getAutomovil();
            a->ListaComp();
            std::cout << "\n\nPresione cualquier tecla para continuar...";
            break;

        case 9:
            std::cout << "Fin" << std::endl;
            std::cout << "\n\nPresione cualquier tecla para continuar...";
            break;
        }
        std::system("pause");
        std::system("cls");
    } while (opcion != 9);


    delete be;
    return 0;
}