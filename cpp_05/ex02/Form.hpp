#ifndef FORM_H
#define FORM_H

#include <iostream>
#include <iomanip>
#include <stdexcept>
#include <fstream>
#include "Bureaucrat.hpp"


#define Black "\033[0;30m"
#define Red "\033[0;31m"
#define Green "\033[0;32m"
#define Yellow "\033[0;33m"
#define Blue "\033[0;34m"
#define Purple "\033[0;35m"
#define Cyan "\033[0;36m"
#define White "\033[0;37m"
#define Reset "\033[0m"

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
        std::string getName() const;
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
        class   notSignedException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
};

std::ostream& operator << (std::ostream& os, Form &obj);


#endif