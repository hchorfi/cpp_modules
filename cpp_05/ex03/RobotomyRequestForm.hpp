#ifndef RobotomyRequestForm_H
#define RobotomyRequestForm_H

#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
    private:
        const std::string _Target;

    public:
        RobotomyRequestForm();
        RobotomyRequestForm(const std::string target);
        RobotomyRequestForm(const RobotomyRequestForm& copy);
        RobotomyRequestForm& operator = (const RobotomyRequestForm& srcObj);
        ~RobotomyRequestForm();
        void execute(Bureaucrat const & executor) const;
};

#endif