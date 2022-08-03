#include <iostream>

template <typename T>
class Multiplicacion {
private:
    T x, y;
public:
    Multiplicacion(T, T);
    ~Multiplicacion(){};
    T resultado(){
        return x * y;
    }
};
template <typename T>
Multiplicacion<T>::Multiplicacion(T x, T y){
    this->x = x;
    this->y = y;
}