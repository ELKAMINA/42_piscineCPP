// http://tvaira.free.fr/bts-sn/poo-c++/cours-poo-c++/cours-c++-conteneurs.pdf

#include "./includes/Span.hpp"
#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

int main()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    
//    sp.getAllNbs();
    // sp.longestSpan();
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    return 0;
}
