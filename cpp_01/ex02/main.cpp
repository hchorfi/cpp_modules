#include <iostream>
#include <iomanip>

int main()
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;

    std::cout << std::left <<std::setw(35) <<"String Address " << ":" << &string << "\n";
    std::cout << std::left <<std::setw(35) <<"String Address using stringPTR " << ":" << stringPTR << "\n";
    std::cout << std::left <<std::setw(35) <<"String Addrss using stringREF " << ":" << &stringREF << "\n";
    std::cout << "----------------\n";
    std::cout << std::left <<std::setw(35) <<"String Content using stringPTR " << ":" << *stringPTR << "\n";
    std::cout << std::left <<std::setw(35) <<"String Content using stringREF " << ":" << stringREF << "\n";
    
    return 0;
}