#include "Zombie.hpp"

Zombie::Zombie()
{
    this->announce();
}

Zombie::~Zombie(void)
{
    std::cout << "<" << this->_name << "> Distructed.\n";
}

void    Zombie::announce(void)
{
    std::cout << "<" << this->_name << "> BraiiiiiiinnnzzzZ...\n";
}

void    Zombie::setName(std::string name)
{
    this->_name = name;
}