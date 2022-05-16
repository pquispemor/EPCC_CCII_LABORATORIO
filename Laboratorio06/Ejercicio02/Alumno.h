#include <iostream>
using namespace std;
class Alumno{
    private:
        int CUI;
        string nombre;
        float notas[3];
    public:
        Alumno(int, string, float[]);
        ~Alumno();
        int getcui();
        void getnombre();
        float promedio();
        bool resultado(float prom);

};
