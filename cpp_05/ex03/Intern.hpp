#ifndef INTERN_H
#define INTERN_H

#include <iostream>
#include <iomanip>
#include <stdexcept>
#include <fstream>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
    public:
        Intern();
        Intern(const Intern& copy);
        Intern& operator = (const Intern& srcObj);
        ~Intern();

        Form* makeForm(std::string formName, std::string target);
        class   DosntExistException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
};

#endif