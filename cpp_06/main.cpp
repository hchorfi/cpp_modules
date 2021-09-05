#include "Convert.hpp"

int main(int ac, char **av)
{
    if (ac == 2){
        Convert convert(av[1]);
        //std::cout << convert.getValue() << "\n";
        convert.printValues();
    }else {
        std::cout << "Invalid Arguments";
    }
}