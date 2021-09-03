#ifndef FORM_H
#define FORM_H

#include <iostream>
#include <iomanip>
#include <stdexcept>
#include <fstream>
#include "Bureaucrat.hpp"

class Bureaucrat;
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
        virtual ~Form();
        std::string getName();
        int getSignGrade() const;
        int getExecGrade() const;
        bool isSigned() const;
        void    setSigne(bool sign);
        void    beSigned(Bureaucrat& bureaucrat);
        virtual void execute(Bureaucrat const & executor) const = 0; //form must be an abstract class

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
        class   AlredySignedException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
};

std::ostream& operator << (std::ostream& os, Form &obj);


#endif