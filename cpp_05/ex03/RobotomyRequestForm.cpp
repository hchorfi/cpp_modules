#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
    //std::cout << "RobotomyRequestForm Default constructor\n";
}
RobotomyRequestForm::RobotomyRequestForm(const std::string target) : Form("RobotomyRequestForm", 72, 45), _Target(target)
{
    //std::cout << this->getName() << " constructor\n";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy)
{
    *this = copy;
}

RobotomyRequestForm& RobotomyRequestForm::operator = (const RobotomyRequestForm& srcObj)
{
    if (this != &srcObj)
    {
        this->setSigne(srcObj.isSigned());
    }
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    //std::cout << this->getName() << " Deconstructor\n";
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    if (executor.getGrade() > this->getExecGrade() || !this->isSigned())
    {
        std::cout << this->getName() << " cannot be executed because ";
        if (executor.getGrade() > this->getExecGrade())
            throw Form::GradeTooLowException();
        throw Form::notSignedException();
    }
    std::cout << this->_Target << " has been robotomized successfully\n";
}