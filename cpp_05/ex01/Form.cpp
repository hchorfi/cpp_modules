#include "Form.hpp"

Form::Form()
{
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
    std::cout << "Default Form Deonstructor\n";
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
