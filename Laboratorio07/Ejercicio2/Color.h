#include <iostream>
using namespace std;

class Color
{
private:
    int red;
    int green;
    int blue;
public:
    Color();
    Color(int,int,int);
    int getRed();
    int getGreen();
    int getBlue();
    ~Color();
};

Color::Color(){}

Color::Color(int red, int green, int blue){
    this->red = red;
    this->green = green;
    this->blue = blue;
}
Color::~Color(){}

int Color::getRed(){
    return red;
}
int Color::getGreen(){
    return green;
}

int Color::getBlue(){
    return blue;
}




