#include "Animal.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    delete i;
    delete j;
    delete meta;
    std::cout << "----------- wrong test --------\n";

    const WrongAnimal* meta2 = new WrongAnimal();
    const WrongAnimal* w = new WrongCat();
    std::cout << w->getType() << " " << std::endl;
    w->makeSound();
    meta2->makeSound();
    delete w;
    delete meta2;

    // Cat cat;
    // Dog dog;

    // std::cout << cat.getType() << "\n";
    // std::cout << dog.getType() << "\n";

    return 0;
}