#include <iostream>
#include <iomanip>

int main(int argc, char **argv)
{

    std::ifstream input(argv[1]);
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    std::cout << input;
}