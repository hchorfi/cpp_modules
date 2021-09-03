#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
    //std::cout << "PresidentialPardonForm Default constructor\n";
}
PresidentialPardonForm::PresidentialPardonForm(const std::string target) : Form("PresidentialPardonForm", 72, 45), _Target(target)
{
    //std::cout << this->getName() << " constructor\n";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy)
{
    *this = copy;
}

PresidentialPardonForm& PresidentialPardonForm::operator = (const PresidentialPardonForm& srcObj)
{
    if (this != &srcObj)
    {
        this->setSigne(srcObj.isSigned());
    }
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    //std::cout << this->getName() << " Deconstructor\n";
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (executor.getGrade() > this->getExecGrade() || !this->isSigned())
    {
        std::cout << this->getName() << " cannot be executed because ";
        if (executor.getGrade() > this->getExecGrade())
            throw Form::GradeTooLowException();
        throw Form::notSignedException();
    }
    std::cout << this->_Target << " has been pardoned by Zafod Beeblebrox\n";
}