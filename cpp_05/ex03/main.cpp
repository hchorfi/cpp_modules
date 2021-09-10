#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
    // std::cout << Green << "*** ShrubberyCreationForm ****\n" << Reset ;
    // try{
    //     Bureaucrat b1("B1", 3); // change the grade to test execution exception
    //     ShrubberyCreationForm f1("HOME");
    //     std::cout << f1;
    //     std::cout << b1;
    //     //f1.beSigned(b1); // comment this to test signed execution exception
    //     //f1.execute(b1);
    //     b1.executeForm(f1);
    // } catch (std::exception& e){
    //     std::cout << e.what() << Reset;
    // }

    // std::cout << Green << "*** RobotomyRequestForm ****\n" << Reset ;
    // try{
    //     Bureaucrat b1("B1", 3); // change the grade to test execution exception
    //     RobotomyRequestForm f1("HOME");
    //     std::cout << f1;
    //     std::cout << b1;
    //     f1.beSigned(b1); // comment this to test signed execution exception
    //     //f1.execute(b1);
    //     b1.executeForm(f1);
    // } catch (std::exception& e){
    //     std::cout << e.what() << Reset;
    // }

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

    std::cout << Green << "*** Intern ****\n" << Reset ;
    try{
        Bureaucrat b1("B1", 3); // change the grade to test execution exception
        Intern someRandomIntern;
        Form* rrf;
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        std::cout << *rrf;
        std::cout << b1;
        (*rrf).beSigned(b1); // comment this to test signed execution exception
        //f1.execute(b1);
        b1.executeForm(*rrf);
        delete rrf;
    } catch (std::exception& e){
        std::cout << e.what() << Reset;
    }
}
