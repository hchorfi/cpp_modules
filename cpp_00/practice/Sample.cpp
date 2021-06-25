#include "Sample.hpp"

Sample::Sample(void){

    std::cout << "Constructor called" << std::endl;
    std::cout << "-----------\n";

    std::cout << "call from inside of the constructor\n";
    this->var = 13;
    this->_var = 37;
    std::cout << "this->var-this->_var: " << this->var << "-" << this->_var << "\n";
    this->fun();

    std::cout << "-----------\n";
    return;

}

Sample2::Sample2(char a, int b, float const c) : var1(a), var2(b), var3(c), var4(1337){

    std::cout << "Constructor called" << std::endl;
    std::cout << "this->var1 = " << this->var1 << std::endl;
    std::cout << "this->var2 = " << this->var2 << std::endl;
    std::cout << "this->var3 = " << this->var3 << std::endl;
    std::cout << "this->var4 = " << this->var4 << std::endl;

}

void Sample::fun(void){

    std::cout << "Function 'fun' called\n";
    return;

}

void Sample::_fun(void) const{

    std::cout << "Private Function '_fun' called\n";
    return;

}

Sample::~Sample(void){
    
    std::cout << "Destructor called\n";
    return;

}

Sample2::~Sample2(void){
    
    std::cout << "Destructor called\n";
    return;

}
