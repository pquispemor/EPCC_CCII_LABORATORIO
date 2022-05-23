#include <iostream>
using namespace std;

class Punto
{
private:
    float x,y;
public:
    Punto(float, float);
    ~Punto();
    void setX(int x){
        this->x = x;
    }
    void setY(int y){
        this->y = y; 
    }
    float getX(){
        return x;
    }
    float getY(){
        return y;
    }
    void imprimirPunto();

};

Punto::Punto(float x, float y)
{
    this->x = x;
    this->y = y;
}

Punto::~Punto()
{
}

void Punto::imprimirPunto(){
    cout<<"Las coordenadas del Punto son: ("<<x<<","<<y<<")\n";
}