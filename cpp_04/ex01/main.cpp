#include "Animal.hpp"

int main()
{
    int i = 8;
    const Animal *animal[i];

    for(int j = 0 ; j < i/2 ; j++)
        animal[j] = new Dog();
    for(int j = i/2 ; j < i ; j++)
        animal[j] = new Cat();
    
    for(int j = 0 ; j < i ; j++ )
        delete animal[j];

    return 0;
}