#include <iostream>
#include <vector>

class RegresionLineal{
public:
    float operator()(float x_bar,float y_bar, std::vector<float> dx, std::vector<float> dy){
        float Sxy = 0;
        float Sxx = 0;
        for (int i = 0; i < dx.size(); i++){
            Sxy += (dx[i] - x_bar) * (dy[i] - y_bar);
            Sxx += (dx[i] - x_bar) * (dx[i] - x_bar);
        }
        return Sxy/Sxx;
    }
    float operator()(float m, float x_bar, float y_bar){
        return y_bar - m * x_bar;
    }
};


int main(){
    std::vector<float> dx = {1,2,2,3,4,4,5,6}; //datos x
    std::vector<float> dy = {2,3,4,4,4,6,5,7}; //datos y
    float promediox = 0;
    float promedioy = 0;
    for (int i = 0; i < dx.size(); i++){
        promediox += dx[i] / dx.size();
        promedioy += dy[i] / dy.size();
    }
    RegresionLineal rl;
    float m = rl(promediox, promedioy, dx , dy);
    float b = rl(m, promediox, promedioy);
    std::cout << "La regresion lineal es: y = " << m << "x + " << b << std::endl;
    return 0;
}