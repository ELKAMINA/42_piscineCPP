#include "../includes/MutantStack.hpp"

template <typename T, typename Container = std::deque<T>>

MutantStack::MutantStack<T, Container>::stack() 
{
 
}

MutantStack::MutantStack(unsigned int N)
{
    this->ajout = 0;
    this->_nbMax = N;
}

MutantStack::MutantStack(MutantStack const& src)
{
    // std::cout << "ajout" << ajout << std::endl;
    this->ajout = src.ajout;
	this->_nbMax = src._nbMax;
    vec.clear();
    vec.insert(vec.end(), src.vec.begin(), src.vec.end());
    *this = src;
}

MutantStack::~MutantStack()
{

}

MutantStack&    MutantStack::operator=( MutantStack const & rhs)
{
    // std::cout << "MutantStack :: Assignation operator." << std::endl;
    if (this != &rhs)
    {
        this->ajout = rhs.ajout;
        this->_nbMax = rhs._nbMax;
        vec.clear();
        vec.insert(vec.end(), rhs.vec.begin(), rhs.vec.end());
    }
    return *this;
}

void    MutantStack::addNumber(unsigned int to_add)
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

unsigned int MutantStack::longestMutantStack()
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

unsigned int MutantStack::shortestMutantStack()
{
    unsigned int min;
    std::vector<unsigned int>::iterator i;
    try
    {
        std::sort(this->vec.begin(), this->vec.end());
        min = longestMutantStack();
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

void    MutantStack::getAllNbs()
{
    std::vector<unsigned int>::iterator i;
    // std::cout << "end" << *this->vec.end() << std::endl;
    for (i = this->vec.begin(); i != this->vec.end(); ++i)
    {
        std::cout << *i << " " << std::endl;
    }
}

void    MutantStack::OneShot(std::vector<unsigned int>::iterator begin, std::vector<unsigned int>::iterator end)
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