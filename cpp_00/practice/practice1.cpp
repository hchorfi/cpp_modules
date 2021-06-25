
#include <stdio.h>
#include <iostream>

int var = 1;
int f(void){return 1;}

namespace Bli{
    int var = 2;
    int f(void){return 2;}
}

namespace Bla{
    int var = 3;
    int f(void){return 3;}
}

namespace Blo = Bla;

int main()
{
    char buf[256];

    printf("var = [%d]\n", var);
    printf("f() = [%d]\n\n", f());

    printf("Bli::var = [%d]\n", Bli::var);
    printf("Bli::f() = [%d]\n\n", Bli::f());

    printf("Bla::var = [%d]\n", Bla::var);
    printf("Bla::f() = [%d]\n\n", Bla::f());

    printf("Blo::var = [%d]\n", Blo::var);
    printf("Blo::f() = [%d]\n\n", Blo::f());

    std::cout << "Hello Moto\n" << "This line returned with 'endl'" << std::endl;
    std::cout << "This line returned with '\\n'\n";
    std::cout << "Please enter your name\n";
    std::cin >> buf;
    std::cout << "Hello " << buf << "\n";
    
    return 0;
}