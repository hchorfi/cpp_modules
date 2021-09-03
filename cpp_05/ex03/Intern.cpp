#include "Intern.hpp"

Intern::Intern()
{

}

Intern::Intern(const Intern& copy)
{
    *this = copy;
}

Intern& Intern::operator = (const Intern& srcObj)
{
    (void)srcObj;
    return *this;
}

Intern::~Intern()
{

}

Form* Intern::makeForm(std::string formName, std::string target)
{
    std::string requests[3] = {"shrubbery creation",
                                "robotomy request",
                                "presidential pardon"};
    Form *form[3] = {new ShrubberyCreationForm(target),
                        new RobotomyRequestForm(target),
                        new PresidentialPardonForm(target)};
    int j = -1;
    for (int i = 0; i < 3 ; i++)
    {
        if (formName != requests[i])
        {
            delete form[i];
        } else {
            j = i;
        }
    }
    if (j == -1)
    {
        throw Intern::DosntExistException();
    }
    return form[j];
}

const char* Intern::DosntExistException::what() const throw()
{
    return ("Form dosn't exist\n");
}