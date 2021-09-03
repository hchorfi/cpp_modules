#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Form.hpp"

class Form;
class Bureaucrat
{
    private:
        const std::string   _Name;
        int                 _Grade;
    public:
        Bureaucrat();
        Bureaucrat(const std::string name, int grade);
        Bureaucrat(const Bureaucrat& copy);
        Bureaucrat& operator = (const Bureaucrat& other);
        ~Bureaucrat();
        std::string getName();
        int getGrade() const;
        void    incrementGrade();
        void    decrementGrade();
        void    signForm(Form &from);

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

std::ostream& operator << (std::ostream& os, Bureaucrat &obj);

#endif