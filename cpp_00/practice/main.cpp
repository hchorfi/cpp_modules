#include "Sample.hpp"

int main(){
    Sample obj1;
    Sample2 obj2('H', 42, 4.3);

    obj1.var = 37;
    std::cout << "------------\n";
    std::cout << "call from outside of the distructor\n" << "var = " << obj1.var << "\n" << "fun : ";
    obj1.fun();
    //obj1._fun();
    std::cout << "------------\n";

    return 0;
}