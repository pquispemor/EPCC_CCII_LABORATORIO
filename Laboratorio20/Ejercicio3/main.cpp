#include <iostream>
#include <memory>

class C1{
private:
	std::shared_ptr<double> d;
public:
	C1(std::shared_ptr<double> value) : d(value) {}
	virtual ~C1() { std::cout << "\nC1 destructor\n"; }
	void print() const { std::cout << "Valor " << *d << "\n"; }
};
class C2 {
private:
	std::shared_ptr<double> d;
public:
	C2(std::shared_ptr<double> value) : d(value) {}
	virtual ~C2() { std::cout << "\nC2 destructor\n"; }
	void print() const { std::cout << "Valor " << *d << "\n"; }
};

int main(){
    std::shared_ptr<double> v1 = std::make_shared<double>(27.06);
    C1 c1(v1);
    C2 c2(v1);
    
    c1.print();
    c2.print();

    return 0;
}