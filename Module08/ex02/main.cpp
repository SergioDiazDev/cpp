#include <iostream>
#include "MutantStack.hpp"
#include <vector>

int main()
{
    std::cout << "MutantStack:" << std::endl;
    MutantStack<int> mstack;
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
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    std::stack<int> s(mstack);

    //////////////////////////////

    std::cout << "List:" << std::endl;


    std::list<int> l;
    l.push_back(5);
    l.push_back(17);
    std::cout << l.back() << std::endl;
    l.pop_back();
    std::cout << l.size() << std::endl;
    l.push_back(3);
    l.push_back(5);
    l.push_back(737);
    //[...]
    l.push_back(0);
    std::list<int>::iterator it1 = l.begin();
    std::list<int>::iterator it2 = l.end();
    ++it1;
    --it1;
    while (it1 != it2)
    {
    std::cout << *it1 << std::endl;
    ++it1;
    }
    
    

    return 0;
}