#ifndef ShrubberyCreationForm_H
#define ShrubberyCreationForm_H

#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
    private:
        const std::string _Target;

    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(const std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm& copy);
        ShrubberyCreationForm& operator = (const ShrubberyCreationForm& srcObj);
        ~ShrubberyCreationForm();
        void execute(Bureaucrat const & executor) const;
};

#endif