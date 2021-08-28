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
** Dog Class
*/

Dog::Dog()
{
    std::cout << "Dog Default constructor called\n";
    this->type = "Dog";
    this->brain = new Brain();
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
    delete this->brain;
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
    this->brain = new Brain();
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
    delete this->brain;
}

void    Cat::makeSound() const
{
    std::cout << "I am a Cat, Meawwwwww... \n";
}
