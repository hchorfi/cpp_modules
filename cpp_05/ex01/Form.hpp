#ifndef FORM_H
#define FORM_H

#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Form
{
    private:
        const std::string _Name;
        const int         _signGrade;
        const int         _execGrade;
        bool              _Signed;

    public:
        Form();
        Form(const std::string name, const int signGrade, const int execGrade);
        Form(const Form& copy);
        Form& operator = (const Form& other);
        ~Form();
        std::string getName();
        int getSignGrade();
        int getExecGrade();
        bool isSigned();
        void    beSigned(Bureaucrat& bureaucrat);

        class   GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        class   GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
};

#endif