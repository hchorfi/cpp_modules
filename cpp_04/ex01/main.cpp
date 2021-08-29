#include "Animal.hpp"

int main()
{
    // int i = 2;
    // const Animal *animal[i];

    // for(int j = 0 ; j < i/2 ; j++)
    //     animal[j] = new Dog();
    // for(int j = i/2 ; j < i ; j++)
    //     animal[j] = new Cat();
    
    // for(int j = 0 ; j < i ; j++ )
    //     delete animal[j];

    Dog test;
    test.setIdea(0, "idea 0 from test");
    test.setIdea(5, "idea 5 from test");
    std::cout << test.getIdea(5) << "--\n";

    Dog test2(test);
    //test2 = test;
    std::cout << test2.getIdea(5) << "----\n";
    std::cout << test.getIdea(5) << "--\n";

    return 0;
}