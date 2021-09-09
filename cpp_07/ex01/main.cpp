#include "iter.hpp"
#include <stdio.h>

int main()
{

    std::cout << "**int\n";
    int len = 10;
    int arr[]={0,1,2,3,4,5,6,7,8,9};

    iter<int>(arr, len, &increment);
    // for (int i = 0; i < len ; i++)
    //     std::cout << arr[i] << " ";

    std::cout << "**char\n";

    int len2 = 2;
    char arr2[]={'a','s'};

    iter<char>(arr2, len2, &increment);
    // for (int i = 0; i < len2 ; i++)
    //     std::cout << arr2[i] << " ";
    
    std::cout << "**float\n";

    int len3 = 2;
    float arr3[]={1.2f,42.0f};

    iter<float>(arr3, len3, &increment);
    // for (int i = 0; i < len2 ; i++)
    //     std::cout << arr3[i] << " ";

    std::cout << "**string\n";

    int len4 = 2;
    std::string arr4[]={"hamza","hchorfi"};

    iter<std::string>(arr4, len4, &increment);

    return 0;
}