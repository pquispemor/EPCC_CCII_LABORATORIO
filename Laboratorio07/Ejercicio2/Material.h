#include <iostream>
using namespace std;

class Material
{
private:
    string mat;
public:
    Material();
    Material(string);
    ~Material();
    string getMaterial();
};

Material::Material(/* args */){}

Material::Material(string mat){
    this->mat = mat;
}
Material::~Material(){}

string Material::getMaterial(){
    return mat;
}
