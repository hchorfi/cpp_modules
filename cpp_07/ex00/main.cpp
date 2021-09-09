#include "template.hpp"

int main()
{

    std::cout << "int \n\n";

    std::cout << "min 10 - 5: " << min<int>(10, 5) << "\n";
    std::cout << "min (10 - 5) + 1: " << min<int>(10, 5) + 1 << "\n";
    std::cout << "max 10 - 5: " << max<int>(10, 5) << "\n";
    std::cout << "max (10 - 5) + 1: " << max<int>(10, 5) + 1 << "\n";
    if ( min<int>(-1, 5) < max<int>(-1, 5))
        std::cout << "min(-1, 5) > max(-1, 5): -1 < 5\n";
    int a = 5, b = 10;
    std::cout << "a = " << a << ", b = " << b << " swap >> ";
    swap(a, b);
    std::cout << "a = " << a << ", b = " << b << "\n";

    std::cout << "\n\nstring \n\n";

    std::cout << "min hamza - hchorfi: " << min<std::string>("hamza", "hchorfi") << "\n";
    std::cout << "min (hamza - hchorfi) + test: " << min<std::string>("hamza", "hchorfi") + "test" << "\n";
    std::cout << "max hamza - hchorfi: " << max<std::string>("hamza", "hchorfi") << "\n";
    std::cout << "max (hamza - hchorfi) + test: " << max<std::string>("hamza", "hchorfi") + "test" << "\n";
    if ( min<std::string>("yzk", "hchorfi") < max<std::string>("yzk", "hchorfi"))
        std::cout << "min(yzk, hchorfi) > max(yzk, hchorfi): yzk < hchorfi\n";
    std::string str1 = "hchorfi";
    std::string str2 = "hamza";
    std::cout << "str1 = " << str1 << ", str2 = " << str2 << " swap >> ";
    swap(str1, str2);
    std::cout << "str1 = " << str1 << ", str2 = " << str2 << "\n";

    // int a = 2;
    // int b = 3;
    // ::swap( a, b );
    // std::cout << "a = " << a << ", b = " << b << std::endl;
    // std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    // std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    // std::string c = "chaine1";
    // std::string d = "chaine2";
    // ::swap(c, d);
    // std::cout << "c = " << c << ", d = " << d << std::endl;
    // std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    // std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    return 0;

}