#include "mutantstack.hpp"
#include "mutantstack.cpp"
#include <list>

// int main()
// {
//     Mutantstack<int> c1;
//     c1.push(5);
//     std::cout << c1.size() << '\n';
//     std::cout << *(c1.begin()) << '\n';
//     std::cout << *(c1.end()) << '\n';
// }

int main()
{
    Mutantstack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    Mutantstack<int>::iterator it = mstack.begin();
    Mutantstack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    std::stack<int> s(mstack);
    s.push(5);
    std::cout << "+" << s.size() << std::endl;
    std::cout << "+" << mstack.size() << std::endl;

    // std::list<int> mstack;
    // mstack.push_back(5);
    // mstack.push_back(17);
    // std::cout << mstack.front() << std::endl;
    // mstack.pop_back();
    // std::cout << mstack.size() << std::endl;
    // mstack.push_back(3);
    // mstack.push_back(5);
    // mstack.push_back(737);
    // //[...]
    // mstack.push_back(0);
    // std::list<int>::iterator it = mstack.begin();
    // std::list<int>::iterator ite = mstack.end();
    // ++it;
    // --it;
    // while (it != ite)
    // {
    // std::cout << *it << std::endl;
    // ++it;
    // }
    //std::stack<int> s(mstack);

    return 0;
}


// 17
// 1
// 5
// 3
// 5
// 737
// 0