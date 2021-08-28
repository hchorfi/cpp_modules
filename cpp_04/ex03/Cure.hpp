#ifndef CURE_H
#define CURE_H

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

class Cure : public AMateria
{
    protected:

    public:
        //Cure(std::string const & type);
        Cure();
        Cure(const Cure& copy);
        Cure& operator = (const Cure& other);
        ~Cure();
        AMateria*	clone() const;
        virtual void use(ICharacter& target);
};

#endif