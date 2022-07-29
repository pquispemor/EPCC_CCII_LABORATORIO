#include <iostream>
#include "GUIFactory.h"
#include "SO_Windows.h"
#include "SO_Mac.h"
#include "SO_Linux.h"
#include "ProductAbstract.h"

void Aplication(const GUIFactory& f, int os) {
    const WinFactory* winFactory = f.CrearControlW();
    const MacFactory* macFactory = f.CrearControlM();
    const LinuxFactory* linuxFactory = f.CrearControlL();
    if (os == 1) {
        std::cout << winFactory->Draw() << std::endl;
    }
    else if (os == 2) {
        std::cout << macFactory->Draw() << std::endl;
    }

    else if (os == 3) {
        std::cout << linuxFactory->Draw() << std::endl;
    }

    else {
        std::cout << "Error" << std::endl;
    }

    delete winFactory;
    delete macFactory;
    delete linuxFactory;
}

int main() {
    std::cout << "Cliente: Windows \n";
    Button* f1 = new Button();
    Aplication(*f1, 1); // 1 - Windows
    delete f1;
    std::cout << std::endl;
    std::cout << "Cliente: Mac \n";
    Button* f2 = new Button();
    Aplication(*f2, 2); // 2 - Mac
    delete f2;

    std::cout << std::endl;
    std::cout << "Cliente: Linux \n";
    CheckBox* f3 = new CheckBox();
    Button* f4 = new Button();
    Aplication(*f3, 3); // 3 - Linux
    Aplication(*f4, 3); // 3 - Linux
    delete f3;
    delete f4;


    return 0;
}