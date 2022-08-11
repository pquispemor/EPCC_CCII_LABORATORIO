#include <iostream>
#include <vector>


class Find{
public:
    std::vector<int> operator()(std::vector<int>& datos, int inicio, int final, int buscar){
        if (datos.empty())
            std::cout << "Vector vacio\n";
        std::vector<int> indices;
        for (int i = inicio; i < final; i++){
            if (datos.at(i) == buscar){
                indices.push_back(i);
            }
        }

        return indices;
    }
};

int main(){
    Find f;
    int buscar;
    std::vector<int> v = {1,4,5,20,10,4,1,9};
    std::cout << "Vector:\n";
    std::cout << "[";
    for (auto i = v.begin(); i < v.end(); i++){
        std::cout << *i << ",";
    }
    std::cout << "]\n";
    std::cout << "\nIngrese el valor que desea buscar :\n";
    std::cin >> buscar;
    std::vector<int> indices = f(v,0,8,buscar);
    if (indices.size() == 0){
        std::cout << "ERROR :: El valor no se encuentra en el vector\n";
    }
    else{
        std::cout << "Indices donde se encuentra el numero:\n";
        std::cout << "[";
        for(auto i = indices.begin(); i < indices.end(); i++){
            std::cout << *i << ",";
        }
        std::cout << "]\n";
    }
    
    return 0;
}