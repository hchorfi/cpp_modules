#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Bureaucrat Default constructor";
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _Name(name), _Grade(grade)
{
    if (this->_Grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (this->_Grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy) : _Name(copy._Name), _Grade(copy._Grade)
{
    if (this->_Grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (this->_Grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat & Bureaucrat::operator = (Bureaucrat const & other)
{
    if(this != &other)
    {
        this->_Grade = other._Grade;

    }
    return *this;
}


