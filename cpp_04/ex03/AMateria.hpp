#ifndef AMATERIA_H
#define AMATERIA_H

#include <iostream>
#include <iomanip>
#include "Character.hpp"

#define Black "\033[0;30m"
#define Red "\033[0;31m"
#define Green "\033[0;32m"
#define Yellow "\033[0;33m"
#define Blue "\033[0;34m"
#define Purple "\033[0;35m"
#define Cyan "\033[0;36m"
#define White "\033[0;37m"
#define Reset "\033[0m"

class ICharacter;
class AMateria
{
    protected:
        std::string _type;

    public:
        AMateria(std::string const & type);
        AMateria();
        AMateria(const AMateria& copy);
        AMateria& operator = (const AMateria& other);
        virtual ~AMateria();
        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif  