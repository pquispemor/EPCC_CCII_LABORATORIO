/*
Hacer un array unidimensional que acepte ocho n�meros enteros. Luego le
pregunte al usuario que ingrese un n�mero a buscar, implementar una funci�n que
busque ese n�mero, si lo enc
*/
#include <iostream>
using namespace std;

bool busqueda (int num [8], int x){
	for (int i=0; i < 8; i++){
		if(num[i] == x){
			return true;
		}	
	}
	return false;
}

int main(){
	int num[8];
	int x;
	cout << "Ingrese 8 numeros : \n";
	for (int i=0; i < 8; i++){
		cin >> num[i];
	}
	cout << "Ingrese el numero que desea buscar: \n";
	cin >> x;
	if (busqueda(num, x) == true)
		cout << "\nEl numero si esta";
	else
		cout << "\nEl numero no esta";
	
	return 0;
}


