// http://tvaira.free.fr/bts-sn/poo-c++/cours-poo-c++/cours-c++-conteneurs.pdf

#include "./includes/easyfind.hpp"
#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

int main()
{
    int myints[] = {50, 90, 20, 10, 29, 200};
    std::vector<int> vec(myints, myints + sizeof(myints) / sizeof(int));
    // easyfind(vec, 20);
    // easyfind(vec, 1000);
    easyfind(vec, -3);
    // easyfind(vec, 1);
}
