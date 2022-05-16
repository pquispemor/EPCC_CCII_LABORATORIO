#include <iostream>
using namespace std;
class fecha{
    private:
        string nombre;
        int dia,mes,anio;
    public:
        fecha(string,int,int,int);
        ~fecha();
        void setnombre(string nom);
        string getnombre();
        int edad(fecha& d);

};