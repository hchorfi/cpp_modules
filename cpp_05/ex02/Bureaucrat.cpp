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

Bureaucrat::Bureaucrat(const Bureaucrat& copy)
{
    *this = copy;
}

Bureaucrat & Bureaucrat::operator = (Bureaucrat const & other)
{
    if(this != &other)
    {
        this->_Grade = other._Grade;
    }
    return *this;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat " << this->_Name << " Default deconstructor\n";
}

void Bureaucrat::decrementGrade()
{
    if (this->_Grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    this->_Grade++;
}

void Bureaucrat::incrementGrade()
{
    if (this->_Grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    this->_Grade--;
}

int Bureaucrat::getGrade() const
{
    return this->_Grade;
}

std::string Bureaucrat::getName()
{
    return this->_Name;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Bureaucrat Grade too High\n");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Bureaucrat Grade too Low\n");
}

void    Bureaucrat::signForm(Form &form)
{
    if (form.isSigned()) {
        std::cout << this->_Name << " cannot sign " << form.getName() << " because " << "it's alredy signed\n";
    } else if (this->getGrade() > form.getSignGrade()){
        std::cout << this->_Name << " cannot sign " << form.getName() << " because " << "grade too low\n";
    } else {
        std::cout << this->_Name << " signs " << form.getName() << "\n";
        form.beSigned(*this);
    }
}

std::ostream& operator << (std::ostream& os, Bureaucrat &obj)
{
    os << obj.getName() << ", Bureaucrat Grade : " << obj.getGrade() << ".\n";
    return os;
}
