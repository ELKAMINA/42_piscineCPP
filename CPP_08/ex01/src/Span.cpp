#include "../includes/Span.hpp"

Span::Span(void)
{
    this->ajout = 0;
    this->_nbMax = 0;
}

Span::Span(unsigned int N)
{
    this->ajout = 0;
    this->_nbMax = N;
}

Span::Span(Span const& src)
{
    // std::cout << "ajout" << ajout << std::endl;
    this->ajout = src.ajout;
	this->_nbMax = src._nbMax;
    vec.clear();
    vec.insert(vec.end(), src.vec.begin(), src.vec.end());
    *this = src;
}

Span::~Span()
{

}

Span&    Span::operator=( Span const & rhs)
{
    // std::cout << "Span :: Assignation operator." << std::endl;
    if (this != &rhs)
    {
        this->ajout = rhs.ajout;
        this->_nbMax = rhs._nbMax;
        vec.clear();
        vec.insert(vec.end(), rhs.vec.begin(), rhs.vec.end());
    }
    return *this;
}

void    Span::addNumber(unsigned int to_add)
{
    try
    {
        if (ajout < this->_nbMax)
        {
            this->vec.push_back(to_add);
            // std::cout << "vec 0" << *vec.begin() << std::endl;
            this->ajout++;
            // std::cout << "ajout " << ajout << std::endl;
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
        // this->getAllNbs();
        return (this->vec[ajout - 1] - this->vec[0]);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return (0);
    }
}

unsigned int Span::shortestSpan()
{
    unsigned int min;
    std::vector<unsigned int>::iterator i;
    try
    {
        std::sort(this->vec.begin(), this->vec.end());
        min = longestSpan();
        for (i = this->vec.begin(); i != this->vec.end(); ++i)
        {
            if ((*(i + 1)) - (*i) < min)
                min = ((*(i + 1)) - (*i));
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return (404);
    }
    return (min);
}

void    Span::getAllNbs()
{
    std::vector<unsigned int>::iterator i;
    // std::cout << "end" << *this->vec.end() << std::endl;
    for (i = this->vec.begin(); i != this->vec.end(); ++i)
    {
        std::cout << *i << " " << std::endl;
    }
}

void    Span::OneShot(std::vector<unsigned int>::iterator begin, std::vector<unsigned int>::iterator end)
{
    try
    {
        for (std::vector<unsigned int>::iterator it = begin; it < end; it++)
        {
            if (this->vec.size() == this->_nbMax)
            {
                MaxNbadded exc;
                throw exc;
            }
            else
            {
                this->vec.push_back(*it);
                this->ajout++;
            } 
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return ;
    }
    
    
}