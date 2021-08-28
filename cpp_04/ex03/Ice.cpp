#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    //AMateria("ice");
    //std::cout << "Ice Default constructor\n";
}

// Ice::Ice(std::string const & type) : _type("ice")
// {
//     std::cout << "Ice string constructor\n";
// }

Ice::Ice(const Ice& copy)
{
    //std::cout << "Ice Copy constructor\n";
    *this = copy;
}

Ice& Ice::operator = (const Ice& other)
{
    //std::cout << "Ice Assignement constructor\n";
    if (this != &other)
    {
        this->_type = other.getType();
    }
    return *this;
}

Ice::~Ice()
{
    //std::cout << "Ice Destructor\n";
}

AMateria*	Ice::clone() const
{
    Ice *clone = new Ice;
    //std::cout << clone->getType() << "clone\n";
    return clone;
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at ";
    std::cout << target.getName() << "*\n";
}
