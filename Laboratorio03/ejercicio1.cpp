/*Hacer un programa que sin usar la funci�n pow(), pero por medio de una funci�n,
calcule la potencia de un n�mero (ambos n�meros ingresados por teclado).*/

#include <iostream>
using namespace std;


int potencia (int base, int pot){
	int x = 1;
	for (int i=1; i <= pot; i++){
		x = x * base;
	}
	return x;
}

int main (){
	int base, pot;
	cout << "Ingresar base: ";
	cin >> base;
	cout << "\nIngresar potencia: ";
	cin >> pot;
	cout << "\nRespuesta: " << potencia(base,pot);
	
	return 0;
}
