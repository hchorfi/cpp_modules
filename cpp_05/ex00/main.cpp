#include "Bureaucrat.hpp"

int main()
{
    // high grade
    std::cout << "******* high grade test ******\n";
    try{
        Bureaucrat b1("B1", 1); // good grade
        std::cout << b1;
        b1.decrementGrade(); // new grade + 1
        std::cout << b1;
        b1.incrementGrade(); // new grade - 1
        //b1.incrementGrade(); // exception throw (1 - 1 = 0) 1 is highest
        std::cout << b1;
    }
    catch (std::exception &e){
        std::cout << e.what();
    }

    // low grade
    std::cout << "******* low grade test ******\n";
    try{
        Bureaucrat b1("B1", 149); // good grade
        std::cout << b1;
        b1.decrementGrade(); // new grade + 1 throw exception if > 150
        std::cout << b1;
    }
    catch (std::exception &e){
        std::cout << e.what();
    }

    //bad grade
    std::cout << "******* bad grade test ******\n";
    try{
        Bureaucrat b2("B2", 151); // bad grade
        std::cout << b2;
    }
    catch (std::exception &e){
        std::cout << e.what();
    }

    //copy
    std::cout << "******* copy test ******\n";
    try{
        Bureaucrat b2("B1", 150);
        std::cout << b2;
        Bureaucrat b1("B2", 1);
        std::cout << b1;
        b1 = b2;
        std::cout << b1;
    }
    catch (std::exception &e){
        std::cout << e.what();
    }
}
