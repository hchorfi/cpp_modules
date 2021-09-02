#include "Form.hpp"

// you need to  
Form::Form() : _Name("no name"), _signGrade(1), _execGrade(1)
{
    this->_Signed = false;
    std::cout << "Default Form Constructor\n";
}

Form::Form(const std::string name, const int signGrade, const int execGrade) : _Name(name), _signGrade(signGrade), _execGrade(execGrade), _Signed(false)
{
    if (signGrade < 1 || execGrade < 1)
        throw Form::GradeTooHighException();
    if (signGrade > 150 || execGrade > 150)
        throw Form::GradeTooLowException();
    // you can't do this if the att are constant
    // this->_Name = name;
    // this->_signGrade = signGrade;
    // this->_execGrade = execGrade;
    // this->_Signed = false; // false at the biginning
}

Form::Form(const Form& copy) : _Name(copy._Name), _signGrade(copy._signGrade), _execGrade(copy._execGrade), _Signed(false)
{
    *this = copy;
}

Form& Form::operator = (const Form& other)
{
    if (this != &other)
    {
        this->_Signed = other._Signed;
    }
    return *this;
}

Form::~Form()
{
    std::cout << "Default Form " << this->_Name << " Deconstructor\n";
}

std::string Form::getName()
{
    return this->_Name;
}

int Form::getSignGrade()
{
    return this->_signGrade;
}

int Form::getExecGrade()
{
    return this->_execGrade;
}

bool Form::isSigned()
{
    return this->_Signed;
}

void    Form::beSigned(Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() > this->_signGrade)
        throw Form::GradeTooLowException();

    this->_Signed = true;
}

const char* Form::GradeTooHighException::what() const throw()
{
    return ("Form Grade too High\n");
}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("Form Grade too Low\n");
}

std::ostream& operator << (std::ostream& os, Form &obj)
{
    os << "Form name: " << obj.getName() << ".\n";
    os << "Form Sign grade: " << obj.getSignGrade() << ".\n";
    os << "Form Execute grade: " << obj.getExecGrade() << ".\n";
    if (obj.isSigned())
        os << "Signed.\n";
    else
        os << "!signed.\n";
    return os;
}
