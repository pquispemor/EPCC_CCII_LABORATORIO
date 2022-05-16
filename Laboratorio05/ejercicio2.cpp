/*2. Cree dos vectores con valores flotantes y asígnele valores aleatorios, para esto deberá
de asignar memoria a cada vector. Calcule el producto punto de vectores y muestre
por pantalla. Una vez finalizado este proceso, retire la memoria asignada a los 
punteros. Repita este proceso de asignación y retiro de memoria dentro de un for de
1 000 000 veces.
*/

#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;

int main(){
	float n1[1];
	float n2[1];
	srand(time(NULL));
	for(int i=0; i<1000000; i++){
		float *p1,*p2;
		for(int j=0; j<1; j++){
		n1[j] = 1+rand()%(101-1);
		n2[j] = 1+rand()%(101-1);
		}
		p1=n1;
		p2=n2;
		for(int i=0; i<1; i++){
			cout << "\nLos numeros generados son :" << *p1 << " y " << *p2;
			cout << "\nEl producto es :" << (*p1) * (*p2);
			n1[i]=0;
			n2[i]=0;
			p1=n1;
			p2=n2;

		}
		//delete p1;
		//delete p2;		
	}
	
	return 0;
}
