#include <iostream>
#include <iomanip>
#include <fstream>

#define Black "\033[0;30m"
#define Red "\033[0;31m"
#define Green "\033[0;32m"
#define Yellow "\033[0;33m"
#define Blue "\033[0;34m"
#define Purple "\033[0;35m"
#define Cyan "\033[0;36m"
#define White "\033[0;37m"
#define Reset "\033[0m"

int main(int argc, char **argv)
{
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    std::string inName = argv[1];
    std::string outName = inName + ".replace";
    if (argc != 4)
    {
        std::cout << Red << "You Need To Enter 3 Arguments: ./replace input word word\n" << Reset;
        return 1;
    }
    std::ifstream inFile(argv[1]);
    std::ofstream outFile(outName);
    if (!inFile.is_open())
    {
        std::cout << Red << "Error opening file\n" << Reset ;
        return 1;
    }
    if (inFile.eof() || s1.empty() || s2.empty())
    {
        inFile.close();
        outFile.close();
        std::cout << Red << "File input can't be empty nor the second or the last argument\n" << Reset ;
        return 1;
    }

    argc = 0;
    std::string line;
    std::size_t found;

    while (std::getline(inFile, line))
    {
        while ((found = line.find(s1)) != std::string::npos)
        {
            line.erase(found, s1.length());
            line.insert(found, s2);
        }
        outFile << line << "\n";
    }
    inFile.close();
    outFile.close();
    return 0;
}

//find
//substr
//erase
//insert

