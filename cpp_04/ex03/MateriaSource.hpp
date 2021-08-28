#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria *_MateriasInv[4];

    public:
        MateriaSource();
        MateriaSource(const MateriaSource& copy);
        MateriaSource& operator = (const MateriaSource& other); 
        ~MateriaSource();
        void learnMateria(AMateria* materia);
        AMateria* createMateria(std::string const & type);
};

#endif