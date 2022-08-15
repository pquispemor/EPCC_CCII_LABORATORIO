#include <iostream>
#include <memory>
class C1{
private:
	std::weak_ptr<double> d;
public:
	C1(std::shared_ptr<double> value) : d(value) {}
	virtual ~C1() { std::cout << "\nC1 destructor\n"; }
	void print() const { 
        std::shared_ptr<double> ptrd = d.lock();
        std::cout << "Valor " << *ptrd << "\n"; 
    }
};
class C2 {
private:
	std::weak_ptr<double> d;
public:
	C2(std::shared_ptr<double> value) : d(value) {}
	virtual ~C2() { std::cout << "C2 destructor\n"; }
	void print() const { 
        std::shared_ptr<double> ptrd = d.lock();
        std::cout << "Valor " << *ptrd << "\n"; 
    }
};

int main()
{
	std::shared_ptr<double> v1 = std::make_shared<double>(27.06);
	std::shared_ptr<C1> c1 = std::make_shared<C1>(v1);
	std::shared_ptr<C2> c2 = std::make_shared<C2>(v1);
    c1->print();
    c2->print();
    
    std::cout << "Modificando valores \n";
    *v1 = 14.5;
    c1->print();
    c2->print();
	return 0;
}