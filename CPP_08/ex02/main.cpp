
#include "./includes/MutantStack.hpp"
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <stack>
#include <list>

int main()
{
    /* Subject tests*/
    // MutantStack<int> mstack;
    // mstack.push(5);
    // mstack.push(17);
    // std::cout << "TOP : " << mstack.top() << std::endl;
    // mstack.pop();
    // std::cout << "Size : " << mstack.size() << std::endl;
    // mstack.push(3);
    // mstack.push(5);
    // mstack.push(737);
    // //[...]
    // mstack.push(0);
    // MutantStack<int>::iterator it = mstack.begin();
    // MutantStack<int>::iterator ite = mstack.end();
    // ++it;
    // --it;
    // while (it != ite)
    // {
    // std::cout << *it << std::endl;
    // ++it;
    // }
    // std::stack<int> s(mstack); :: Constructeur par recopie
        /* Subject tests with Lists */
    std::list<int> mstack;
    mstack.push_front(5);
    mstack.push_front(17);
    std::cout << "the first element : " << mstack.front() << std::endl;
    mstack.pop_front();
    std::cout << "Siize " << mstack.size() << std::endl;
    mstack.push_back(3);
    mstack.push_back(5);
    mstack.push_back(737);
    // //[...]
    mstack.push_back(0);
    std::list<int>::iterator it = mstack.begin();
    std::list<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    return 0;
}
