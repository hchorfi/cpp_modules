#include "Character.hpp"

Character::Character()
{
    for (int i = 0; i < 4; i++)
    {
        this->_MateriasInv[i] = NULL; // the inventory start empty
    }
}

Character::Character(std::string name) : _Name(name)
{
    for (int i = 0; i < 4; i++)
    {
        this->_MateriasInv[i] = NULL; // the inventory start empty
    }
}

Character::Character(const Character& copy)
{
    this->_Name = copy._Name;
    for (int i = 0; i < 4; i++)
    {
        if (copy._MateriasInv[i]) //if the inventory not empty
        {
            this->_MateriasInv[i] = copy._MateriasInv[i]; 
        }
        else
            this->_MateriasInv[i] = NULL;
    }
}

Character& Character::operator = (const Character& other)
{
    if (this != &other)
    {
        for (int i = 0; i < 4; i++)
        {
            if (other._MateriasInv[i]) //if the inventory not empty
            {
                this->_MateriasInv[i] = other._MateriasInv[i]; 
            }
            else
                this->_MateriasInv[i] = NULL;
        }
    }
    return *this;
}

Character::~Character()
{
    //std::cout << "character destructor\n";
}

std::string const & Character::getName() const
{
    return this->_Name;
}

void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (!this->_MateriasInv[i])
        {
            this->_MateriasInv[i] = m;
            break;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx >=0 && idx < 4 && this->_MateriasInv[idx] != NULL)
        this->_MateriasInv[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx >=0 && idx < 4 && this->_MateriasInv[idx] != NULL)
        this->_MateriasInv[idx]->use(target);
}