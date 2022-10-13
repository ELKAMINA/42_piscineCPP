#ifndef ITER_CLASS_HPP
#define ITER_CLASS_HPP
#include <iostream>

template<typename T>
void    iter(T* adTab,int sizeTab, void (*func)(T& index))
{
    for (int i = 0; i < sizeTab; i++)
    {
        func(adTab[i]);
    }
    
}

template<typename L>
void    display(L& toprint)
{
    std::cout << toprint << std::endl;
}

#endif