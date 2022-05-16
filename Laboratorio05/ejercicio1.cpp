/*1. Asignar valores a dos variables enteras, intercambie estos valores almacenados
usando solo punteros a enteros.
*/

#include <iostream>
 
using namespace std;

int main(){
	int n1,n2;
	int* p1;
	int* p2; 
	cout << "n1: ?\n";
	cin >> n1;
	cout << "n2: ?\n";
	cin >> n2;
	cout << "Valores : " << n1 << " - " << n2;
	p1 = &n2;
	p2 = &n1;
	cout << "\nValores  Intercambiaros: " << *p1 << " - " << *p2;
	
	return 0;
}

