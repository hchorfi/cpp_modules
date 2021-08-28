#include "Animal.hpp"

int main()
{
    // int i = 8;
    // const Animal *animal[i];

    // for(int j = 0 ; j < i/2 ; j++)
    //     animal[j] = new Dog();
    // for(int j = i/2 ; j < i ; j++)
    //     animal[j] = new Cat();
    
    // for(int j = 0 ; j < i ; j++ )
    //     delete animal[j];

    //const Animal* meta = new Animal(); // we can't do that !!
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    //meta->makeSound();
    delete i;
    delete j;
    //delete meta;

    return 0;
}