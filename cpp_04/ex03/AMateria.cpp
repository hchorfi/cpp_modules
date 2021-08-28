#include "AMateria.hpp"

AMateria::AMateria()
{
    //std::cout << "AMateria Default constructor\n";
}

AMateria::AMateria(std::string const & type) : _type(type)
{
    //std::cout << "AMateria string constructor\n";
}

AMateria::AMateria(const AMateria& copy)
{
    //std::cout << "AMateria Copy constructor\n";
    *this = copy;
}

AMateria& AMateria::operator = (const AMateria& other)
{
    //std::cout << "AMateria Assignement constructor\n";
    if (this != &other)
    {
        this->_type = other.getType();
    }
    return *this;
}

AMateria::~AMateria()
{
    //std::cout << "AMateria Destructor\n";
}

std::string const & AMateria::getType() const
{
    return this->_type;
}

void AMateria::use(ICharacter& target)
{
    std::cout << "unused method" << target.getName() <<"\n";
}