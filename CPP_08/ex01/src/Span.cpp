#include "../includes/Span.hpp"

Span::Span(void)
{
    
}

Span::Span(unsigned int N)
{
    this->_nbMax = N;
}

Span::~Span()
{

}

void    Span::addNumber(unsigned int to_add)
{
    try
    {
        if (ajout < this->_nbMax)
        {
            this->vec.push_back(to_add);
            this->ajout++;
        }
        else
        {
            MaxNbadded exc;
            throw exc;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return ;
    }
    
}

unsigned int Span::longestSpan()
{
    try
    {
        if (this->ajout == 0 || this->ajout == 1 )
        {
            NoDistance exc;
            throw exc;
        }
        std::sort(this->vec.begin(), this->vec.end());
        return std::distance(this->vec.begin(), this->vec.begin());
       
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return (0);
    }
    
}

// unsigned int Span::shortestSpan()
// {
//     unsigned int min;
//     try
//     {
//         for (unsigned int i = 0; i < this->ajout; i++)
//         {
//             min = longestSpan();
//             this->vec.at(i + 1) - this->vec.at(i);
//             if ((this->vec.at(i + 1) - this->vec.at(i)) < min)
//             {
//                 min = this->vec.at(i + 1) - this->vec.at(i);
//             }
//         }
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//         return (404);
//     }
//     return (min);
// }