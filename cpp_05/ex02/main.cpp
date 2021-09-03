#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

#define Black "\033[0;30m"
#define Red "\033[0;31m"
#define Green "\033[0;32m"
#define Yellow "\033[0;33m"
#define Blue "\033[0;34m"
#define Purple "\033[0;35m"
#define Cyan "\033[0;36m"
#define White "\033[0;37m"
#define Reset "\033[0m"

int main()
{
    // std::cout << Green << "********** test Form grade range ********\n" << Reset ;
    // try{
    //     Form f1("F1", 1, 150);
    //     std::cout << f1;
    //     Form f2("F2", 1, 0);
    //     std::cout << f2;
    // } catch (std::exception &e){
    //     std::cout << e.what();
    // }

    // std::cout << Green << "********** test Form and bureaucrat asignation ********\n" << Reset ;
    // try{
    //     Bureaucrat b1("B1", 5);
    //     std::cout << b1;
    //     Form f1("F1", 10, 5);
    //     std::cout << f1;
    //     //f1.beSigned(b1);
    //     b1.signForm(f1);
    //     std::cout << f1;
    // } catch (std::exception& e){
    //     std::cout << e.what();
    // }

    // std::cout << Green << "********** test Form and bureaucrat wrong asignation ********\n" << Reset ;
    // try{
    //     Bureaucrat b1("B1", 5);
    //     std::cout << b1;
    //     Form f1("F1", 10, 5);
    //     std::cout << f1;
    //     f1.beSigned(b1);
    //     std::cout << f1;
    //     b1.signForm(f1);
    // } catch (std::exception& e){
    //     std::cout << e.what();
    // }

    // std::cout << Green << "********** test Form and bureaucrat wrong asignation 2 ********\n" << Reset ;
    // try{
    //     Bureaucrat b1("B1", 5);
    //     std::cout << b1;
    //     Form f1("F1", 3, 5);
    //     std::cout << f1;
    //     f1.beSigned(b1);
    //     std::cout << f1;
    //     b1.signForm(f1);
    // } catch (std::exception& e){
    //     std::cout << e.what();
    // }

    try{
        Bureaucrat b1("B1", 1);
        ShrubberyCreationForm f1("HOME");
        std::cout << f1;
        f1.beSigned(b1);
        f1.execute(b1);
    } catch (std::exception& e){
        std::cout << e.what();
    }
}
