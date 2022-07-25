#pragma once
#ifndef AUTOMOVIL_H
#define AUTOMOVIL_H

#include <vector>
#include <iostream>

class Automovil
{
public:
	std::vector<std::string> componentes;
	void ListaComp() const {
		std::cout << "Componentes : \n";
		for (size_t i = 0; i < componentes.size(); i++)
		{
			if (componentes[i] == componentes.back()) {
				std::cout << componentes[i];
			}
			else {
				std::cout << componentes[i] << ",";
			}
			std::cout << std::endl;
		}
		std::cout << std::endl;
	}
};

#endif
