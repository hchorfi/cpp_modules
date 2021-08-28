#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include "Icharacter.hpp"
#include "AMateria.hpp"

class   Character : public ICharacter
{
    private :
        std::string _Name; // name of the character
        AMateria    *_MateriasInv[4]; //materias inventory 
    
    public :
        Character();
        Character(std::string name);
        Character(const Character& copy);
        Character& operator = (const Character& other);
        ~Character();
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);

};

#endif