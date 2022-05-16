/*Hacer un programa que lea por teclado un a�o, calcule y muestre si es bisiesto. Para
realizar el c�lculo utiliza una funci�n llamada bisiesto. La funci�n bisiesto recibe el
a�o le�do por teclado, comprueba si es o no bisiesto.*/

#include <iostream>
using namespace std;

void bisiesto(int year){
	if (year % 4 == 0){
		if(year % 100 == 0){
			if(year % 400 == 0)
				cout << "Es Bisiesto";
			else
				cout << "No es Bisiesto";	
		}
		else
			cout << "Es Bisiesto";
	}
	else
		cout << "No es Bisiesto";
}

int main(){
	int year;
	cout << "Por favor ingresar el a�o: ";
	cin >> year;
	cout << "\nEl a�o :";
	bisiesto(year);
	
	return 0;
}
