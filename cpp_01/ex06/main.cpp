#include "Karen.hpp"

#define INFO 0
#define WARNING 1
#define ERROR 2
#define DEBUG 3

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        std::cout << "Please Enter One Argument\n" << Reset ;
        return 1;
    }
    
    Karen ka;
    std::string level = argv[1];
    std::string levelList[4] = {"INFO", "WARNING", "ERROR", "DEBUG"};
    int i = 0;
    while (i < 4)
    {
        if (level == levelList[i])
            break;
        i++;
    }
    
    switch (i)
    {
    case ERROR :
        ka.complain("ERROR");
    case WARNING :
        ka.complain("WARNING");
    case INFO :
        ka.complain("INFO");
    case DEBUG :
        ka.complain("DEBUG");
        break;
    default:
        std::cout << "Probably complaining about insignificant problems\n";
        break;
    }
    return 0;
}
