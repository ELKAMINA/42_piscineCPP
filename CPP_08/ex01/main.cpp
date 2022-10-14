// http://tvaira.free.fr/bts-sn/poo-c++/cours-poo-c++/cours-c++-conteneurs.pdf

#include "./includes/Span.hpp"
#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

int main()
{
//     Span sp = Span(5);
//     sp.addNumber(6);
//     sp.addNumber(3);
//     sp.addNumber(17);
//     sp.addNumber(9);
//     sp.addNumber(11);
    
// //    sp.getAllNbs();
//     // sp.longestSpan();
//     std::cout << sp.shortestSpan() << std::endl;
//     std::cout << sp.longestSpan() << std::endl;

    // /* Inserting in one time */
    // unsigned int tab[] = {19, 229, 82720,292828,7272, 2872, 283, 8292, 8272};
    // std::vector<unsigned int> uVec(tab, tab + 9);
    // Span sp(20);

    // sp.OneShot(uVec.begin(), uVec.end());
    // // sp.getAllNbs();
    // std::cout << sp.shortestSpan() << std::endl;
    // std::cout << sp.longestSpan() << std::endl;

    // /* 100000 insertion */
    // Span	sp(998);
    // for (int i = 0; i < 1000; i++)
    //     sp.addNumber(i);
    // std::cout << sp.shortestSpan() << std::endl;
    // std::cout << sp.longestSpan() << std::endl;
    // /* PAr RECOPIE */
    Span	sp(6);
    for (int i = 0; i < 5; i++)
        sp.addNumber(i);
    // Span test(sp);
    Span test = sp;
    test.addNumber(100);

    // std::cout << std::endl;
    // /* TEEEEEST */
    test.getAllNbs();
    // std::cout << std::endl;
    //  /* SPPPPP */
    sp.getAllNbs();
    return 0;
}
