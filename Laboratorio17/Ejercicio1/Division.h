#include <iostream>

template <typename T>
class Division {
private:
    T x, y;
public:
    Division(T, T);
    ~Division(){};
    T resultado(){
        return x / y;
    }
};
template <typename T>
Division<T>::Division(T x, T y){
    this->x = x;
    this->y = y;
}