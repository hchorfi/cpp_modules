#ifndef Animal_H
#define Animal_H

#include <iostream>
#include <iomanip>
#include "Brain.hpp"

#define Black "\033[0;30m"
#define Red "\033[0;31m"
#define Green "\033[0;32m"
#define Yellow "\033[0;33m"
#define Blue "\033[0;34m"
#define Purple "\033[0;35m"
#define Cyan "\033[0;36m"
#define White "\033[0;37m"
#define Reset "\033[0m"

/*
** Animal Class
*/

class   Animal
{
    public:
        Animal();
        Animal(const Animal& copy);
        Animal& operator = (const Animal& animal);
        virtual ~Animal();
        std::string getType() const;
        virtual void    makeSound() const = 0;
    
    protected:
        std::string type;
};

/*
** Dog Class
*/

class   Dog: public Animal
{
    public:
        Dog();
        Dog(const Dog& copy);
        Dog& operator = (const Dog& dog);
        ~Dog();
        virtual void    makeSound() const;

    private:
        Brain* brain;
};

/*
** Cat Class
*/

class   Cat: public Animal
{
    public:
        Cat();
        Cat(const Cat& copy);
        Cat& operator = (const Cat& cat);
        ~Cat();
        virtual void    makeSound() const;

    private:
        Brain* brain;
};

#endif