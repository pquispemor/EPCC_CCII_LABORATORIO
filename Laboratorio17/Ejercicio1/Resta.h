#include <iostream>

template <typename T>
class Resta {
private:
    T x, y;
public:
    Resta(T, T);
    ~Resta(){};
    T resultado(){
        return x - y;
    }
};
template <typename T>
Resta<T>::Resta(T x, T y){
    this->x = x;
    this->y = y;
}