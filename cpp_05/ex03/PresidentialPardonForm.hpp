#ifndef PresidentialPardonForm_H
#define PresidentialPardonForm_H

#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
    private:
        const std::string _Target;

    public:
        PresidentialPardonForm();
        PresidentialPardonForm(const std::string target);
        PresidentialPardonForm(const PresidentialPardonForm& copy);
        PresidentialPardonForm& operator = (const PresidentialPardonForm& srcObj);
        ~PresidentialPardonForm();
        void execute(Bureaucrat const & executor) const;
};

#endif