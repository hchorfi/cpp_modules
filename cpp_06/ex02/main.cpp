#include <iomanip>
#include <iostream>
#include <stdexcept>

class Base
{
    public:
        virtual ~Base() {};
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base * generate(void)
{
    int i = std::rand() % 3;
    Base *pb;

    std::cout << i << std::endl;
    if (i == 0)
        pb = new A;
    else if (i == 1)
        pb = new B;
    else
        pb = new C;

    return pb;
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "by pointer : A\n";
    else if (dynamic_cast<B*>(p))
        std::cout << "by pointer : B\n";
    else if (dynamic_cast<C*>(p))
        std::cout << "by pointer : C\n";
}

void identify( Base &p)
{
    try {
        (void)dynamic_cast<A&>(p);
        std::cout << "by reference : A\n";
    } catch (std::bad_cast &bc){
        try{
            (void)dynamic_cast<B&>(p);
            std::cout << "by reference : B\n";
        } catch (std::bad_cast &bc) {
            try {
                (void)dynamic_cast<C&>(p);
                std::cout << "by reference : C\n";
            } catch (std::bad_cast &bc) {

            }
        }
    }
    
}

int main()
{
    std::srand (time(NULL));
    Base *p = generate();
    identify(p);
    identify(*p);
    delete p;

}