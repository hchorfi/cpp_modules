#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
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
