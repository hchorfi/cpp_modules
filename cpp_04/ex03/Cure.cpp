#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    //AMateria("ice");
    //std::cout << "Cure Default constructor\n";
}

// Cure::Cure(std::string const & type) : _type("ice")
// {
//     std::cout << "Cure string constructor\n";
// }

Cure::Cure(const Cure& copy)    
{
    //std::cout << "Cure Copy constructor\n";
    *this = copy;
}

Cure& Cure::operator = (const Cure& other)
{
    //std::cout << "Cure Assignement constructor\n";
    if (this != &other)
    {
        this->_type = other.getType();
    }
    return *this;
}

Cure::~Cure()
{
    //std::cout << "Cure Destructor\n";
}

AMateria*	Cure::clone() const
{
    Cure *clone = new Cure;
    //std::cout << clone->getType() << "clone\n";
    return clone;
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals ";
    std::cout << target.getName() << "’s wounds *\n";
}
