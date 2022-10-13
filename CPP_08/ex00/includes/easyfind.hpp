#ifndef EASY_CLASS_HPP
# define EASY_CLASS_HPP
#include <algorithm>
#include <vector>
#include <iostream>

template<typename T>
void    easyfind(std::vector<T> first, int second)
{
    typename std::vector<T>::iterator itV;
    itV = find(first.begin(), first.end(), second);
    if (itV != first.end())
        std::cout << "Valeur : " << *itV << " trouvée!" << std::endl;
    else
        std::cout << "Valeur : " << second << " non trouvée!" << std::endl;
    return ;
}

#endif