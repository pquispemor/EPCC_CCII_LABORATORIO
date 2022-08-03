#include <iostream>

template <typename T>
class Suma {
private:
    T x, y;
public:
    Suma(T, T);
    ~Suma(){};
    T resultado(){
        return x + y;
    }
};
template <typename T>
Suma<T>::Suma(T x, T y){
    this->x = x;
    this->y = y;
}