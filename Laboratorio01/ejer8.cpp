//8. Escribir un programa que calcule la media de x cantidad n�meros introducidos por el teclado
#include <iostream>
using namespace std;

int main(){
    int x;
    cout << "Indicar tama�o: ";
    cin >> x;
    int num[x], sum = 0;
    for (int i = 0; i < x; i++)
    {
        cin >> num[i];
        sum+=num[i];
        cout << endl;
    }
    
    cout << "La media es : " << sum/x;

    
    return 0;
}
