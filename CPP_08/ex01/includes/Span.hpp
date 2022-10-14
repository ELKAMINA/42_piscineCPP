#ifndef SPAN_CLASS_HPP
# define SPAN_CLASS_HPP
#include <algorithm>
#include <vector>
#include <iostream>
#include <iomanip>

class Span
{
    public :
        Span(unsigned int N);
        ~Span();
        void            addNumber(unsigned int to_add);
        unsigned int    shortestSpan();
        unsigned int    longestSpan();
        void            getAllNbs();

    private :
        unsigned int                 _nbMax;
        int                         ajout;
        std::vector<unsigned int>   vec;
        Span(void);
        class MaxNbadded : public std::exception
        {
            public: 
                virtual const char* what() const throw()
                {
                    return ("Max number added. Can't add");
                }
        };
        class NoDistance : public std::exception
        {
            public: 
                virtual const char* what() const throw()
                {
                    return ("Numbers are low. Can't get any distance");
                }
        };
};

#endif