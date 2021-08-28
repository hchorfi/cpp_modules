#include "Animal.hpp"

/*
** Animal Class
*/

Animal::Animal()
{
    std::cout << "Animal Default constructor called\n";
}

Animal::Animal(const Animal& copy)
{
    std::cout << "Animal Copy constructor called\n";
    *this = copy;
}

Animal& Animal::operator = (const Animal& animal)
{
    std::cout << "Animal Assignement constructor called\n";
    if (this != &animal)
        this->type = animal.type;
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor called\n";
}

std::string Animal::getType() const
{
    return this->type;
}

void    Animal::makeSound() const
{
    std::cout << "I am an animal, i can have multiple sounds\n";
}

/*
** WrongAnimal Class
*/

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal Default constructor called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
    std::cout << "WrongAnimal Copy constructor called\n";
    *this = copy;
}

WrongAnimal& WrongAnimal::operator = (const WrongAnimal& wanimal)
{
    std::cout << "WrongAnimal Assignement constructor called\n";
    if (this != &wanimal)
        this->type = wanimal.type;
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor called\n";
}

std::string WrongAnimal::getType() const
{
    return this->type;
}

void    WrongAnimal::makeSound() const
{
    std::cout << "I am a wrong animal, i can have multiple wrong sounds\n";
}

/*
** Dog Class
*/

Dog::Dog()
{
    std::cout << "Dog Default constructor called\n";
    this->type = "Dog";
}

Dog::Dog(const Dog& copy) : Animal()
{
    std::cout << "Dog Copy constructor called\n";
    *this = copy;
}

Dog& Dog::operator = (const Dog& dog)
{
    std::cout << "Dog Assignement constructor called\n";
    if (this != &dog)
        this->type = dog.type;
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called\n";
}

void    Dog::makeSound() const
{
    std::cout << "I am a Dog, Haw Haw... \n";
}

/*
** Cat Class
*/

Cat::Cat()
{
    std::cout << "Cat Default constructor called\n";
    this->type = "Cat";
}

Cat::Cat(const Cat& copy) : Animal()
{
    std::cout << "Cat Copy constructor called\n";
    *this = copy;
}

Cat& Cat::operator = (const Cat& cat)
{
    std::cout << "Cat Assignement constructor called\n";
    if (this != &cat)
        this->type = cat.type;
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat Destructor called\n";
}

void    Cat::makeSound() const
{
    std::cout << "I am a Cat, Meawwwwww... \n";
}

/*
** WrongCat Class
*/

WrongCat::WrongCat()
{
    std::cout << "WrongCat Default constructor called\n";
    this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& copy) : WrongAnimal()
{
    std::cout << "WrongCat Copy constructor called\n";
    *this = copy;
}

WrongCat& WrongCat::operator = (const WrongCat& cat)
{
    std::cout << "WrongCat Assignement constructor called\n";
    if (this != &cat)
        this->type = cat.type;
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor called\n";
}

void    WrongCat::makeSound() const
{
    std::cout << "I am a WrongCat, Meawwwwww... \n";
}
