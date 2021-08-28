#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for(int i = 0; i < 4 ; i++)
    {
        this->_MateriasInv[i] = NULL;
    }
}

MateriaSource::MateriaSource(const MateriaSource& copy)
{
    for (int i = 4; i < 4 ; i++)
    {
        this->_MateriasInv[i] = copy._MateriasInv[i];
    }
}

MateriaSource & MateriaSource::operator = (MateriaSource const & other)
{
    if (this != &other)
    {
        for (int i = 4; i < 4 ; i++)
        {
            this->_MateriasInv[i] = other._MateriasInv[i];
        }
    }
    return *this;
}

MateriaSource::~MateriaSource()
{
    //std::cout << "materiasource destructor\n";
    // for (int i = 4; i < 4; i++)
    // {
    //     if (this->_MateriasInv[i])
    //         delete this->_MateriasInv[i];
    // }
}

void MateriaSource::learnMateria(AMateria* materia)
{
    for (int i = 0; i < 4; i++)
    {
        if (!this->_MateriasInv[i])
        {
            this->_MateriasInv[i] = materia;
            break;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_MateriasInv[i]->getType() == type)
            return (this->_MateriasInv[i]->clone());
    }
    return 0;
}