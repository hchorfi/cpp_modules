#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include <iomanip>
#include <stdexcept>

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
        int getGrade();
        void    incrementGrade();
        void    decrementGrade();

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