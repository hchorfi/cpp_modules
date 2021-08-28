#ifndef ICE_H
#define ICE_H

#include <iostream>
#include <iomanip>
#include "AMateria.hpp"
#include "Icharacter.hpp"

#define Black "\033[0;30m"
#define Red "\033[0;31m"
#define Green "\033[0;32m"
#define Yellow "\033[0;33m"
#define Blue "\033[0;34m"
#define Purple "\033[0;35m"
#define Cyan "\033[0;36m"
#define White "\033[0;37m"
#define Reset "\033[0m"

class Ice : public AMateria
{
    protected:

    public:
        //Ice(std::string const & type);
        Ice();
        Ice(const Ice& copy);
        Ice& operator = (const Ice& other);
        ~Ice();
        AMateria*	clone() const;
        virtual void use(ICharacter& target);
};

#endif