#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    std::cout << Green << "*** ShrubberyCreationForm ****\n" << Reset ;
    try{
        Bureaucrat b1("B1", 3); // change the grade to test execution exception
        ShrubberyCreationForm f1("HOME");
        std::cout << f1;
        std::cout << b1;
        //f1.beSigned(b1); // comment this to test signed execution exception
        //f1.execute(b1);
        b1.executeForm(f1);
    } catch (std::exception& e){
        std::cout << e.what() << Reset;
    }

    std::cout << Green << "*** RobotomyRequestForm ****\n" << Reset ;
    try{
        Bureaucrat b1("B1", 3); // change the grade to test execution exception
        RobotomyRequestForm f1("HOME");
        std::cout << f1;
        std::cout << b1;
        f1.beSigned(b1); // comment this to test signed execution exception
        //f1.execute(b1);
        b1.executeForm(f1);
    } catch (std::exception& e){
        std::cout << e.what() << Reset;
    }

    std::cout << Green << "*** PresidentialPardonForm ****\n" << Reset ;
    try{
        Bureaucrat b1("B1", 3); // change the grade to test execution exception
        PresidentialPardonForm f1("HOME");
        std::cout << f1;
        std::cout << b1;
        f1.beSigned(b1); // comment this to test signed execution exception
        //f1.execute(b1);
        b1.executeForm(f1);
    } catch (std::exception& e){
        std::cout << e.what() << Reset;
    }
}
