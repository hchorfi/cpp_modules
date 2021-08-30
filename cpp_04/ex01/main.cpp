#include "Animal.hpp"

int main()
{
    int i = 2;
    const Animal *animal[i];

    for(int j = 0 ; j < i/2 ; j++)
        animal[j] = new Dog();
    for(int j = i/2 ; j < i ; j++)
        animal[j] = new Cat();
    
    for(int j = 0 ; j < i ; j++ )
        delete animal[j];

    std::cout << "*******************\n";

    Dog dog;
    dog.setIdea(0, "Dog idea 0 from dog");
    dog.setIdea(5, "Dog idea 5 from dog");
    std::cout << dog.getIdea(5) << "--\n";

    Dog dog2(dog);
    std::cout << dog2.getIdea(5) << "----\n";
    std::cout << dog.getIdea(5) << "--\n";

    std::cout << "*******************\n";

    Cat cat;
    cat.setIdea(0, "cat idea 0 from cat");
    cat.setIdea(5, "cat idea 5 from cat");
    std::cout << cat.getIdea(5) << "--\n";

    Cat cat2(cat);
    std::cout << cat2.getIdea(5) << "----\n";
    std::cout << cat.getIdea(5) << "--\n";
    return 0;
}