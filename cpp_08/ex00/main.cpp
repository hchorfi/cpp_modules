#include "easyfind.hpp"
#include <vector>
#include <map>
#include <list>

int main()
{
    std::cout << "****** vector test ******\n";
    std::vector<int> myVect;
    //avoyd c++98 error for initializer list (myvect = {1,2,3})
    for (int i = 0; i < 10 ; i++){
        myVect.push_back(i);
    }
    try
    {
        easyfind< std::vector<int> >(myVect, 5);
    }
    catch(std::string &e)
    {
        std::cout << e << '\n';
    }

    // std::cout << "****** map test ******\n";
    // std::map<int, int> myMap;
    // for (int i = 0; i < 10 ; i++){
    //     myMap.insert(std::pair<int, int> (i, i * 10));
    // }
    // try{
    //     easyfind< std::map<int, int> >(myMap, 5);
    // } catch (std::string &e)
    // {
    //     std::cout << e << '\n';
    // }

    std::cout << "****** list test ******\n";
    std::list<int> myList;
    for (int i = 0; i < 10 ; i++){
        myList.push_back(i);
    }
    try
    {
        easyfind< std::list<int> >(myList, 5);
    }
    catch(std::string &e)
    {
        std::cout << e << '\n';
    }

    return 0;
}
