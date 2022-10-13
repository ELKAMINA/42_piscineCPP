// http://tvaira.free.fr/bts-sn/poo-c++/cours-poo-c++/cours-c++-conteneurs.pdf

#include "./includes/easyfind.hpp"
#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <set>

int main()
{
    // int myints[] = {50, 90, 20, 10, 29, 200};
    // std::vector<int> vec(myints, myints + sizeof(myints) / sizeof(int));
    // // easyfind(vec, 20);
    // // easyfind(vec, 1000);
    // easyfind(vec, -3);
    // easyfind(vec, 1);
    std::vector<int> vi;
    std::list<int> lf;
    std::set<int> sc;

    vi.push_back(1);
    vi.push_back(20);
    vi.push_back(3);
    vi.push_back(40);
    vi.push_back(5);
    easyfind(vi, 1);

    std::cout << std::endl;
    lf.push_back(0);
    lf.push_front(15);
    lf.push_back(20);
    lf.push_front(3509);
    easyfind(lf, 12);

    std::cout << std::endl;
    sc.insert(123);
    sc.insert(19);
    sc.insert(728);
    sc.insert(829);
    easyfind(sc, 829);
    std::cout << std::endl;
}
