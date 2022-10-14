#ifndef MUTANT_CLASS_HPP
# define MUTANT_CLASS_HPP
#include <algorithm>
#include <stack>
#include <iostream>
#include <iomanip>

template <typename T, typename Container = std::deque<T> >
// typename Container = std::deque<T> : revient à définir deque par défaut si jamais ni list, ni map ni vector n'a été defini

class MutantStack : public std::stack<T, Container>
{
    public :
        /*Constructs a stack container adaptor object : https://cplusplus.com/reference/stack/stack/stack/*/
        MutantStack() :MutantStack<T, Container>::stack(){};

        /* Constructeur par recopie */
        MutantStack(const MutantStack<T, Container>& src):MutantStack<T, Container>::stack(src){};

        /* Opérateur d'Assignation  : https://cplusplus.com/reference/stack/stack/operators/*/
        MutantStack<T, Container>& operator=(MutantStack<T, Container> const &rhs)
        {
            if (this != &rhs)
            {
               this->MutantStack<T, Container>::stack::operator=(rhs); 
            }
            return (*this);
        }
        virtual ~MutantStack(){};

        /*
        Exemple : 
        typedef typename _MyBase::value_type value_type;
        value_type v;
        ********************
        typedef is defining a new type for use in your code, like a shorthand.
        typename here is letting the compiler know that value_type is a type and not a static member of _MyBase.
        the :: is the scope of the type. It is kind of like "is in" so value_type "is in" _MyBase. or can also be thought of as contains.
        */
        typedef typename Container::iterator         iterator;
        typedef typename Container::reverse_iterator rev_iterator;

        /* c is an instance of Deque Class */
        iterator    begin(){return this->c.begin();};
        iterator    end(){return this->c.end();};
        rev_iterator    rbegin(){return this->c.rbegin();};
        rev_iterator    rend(){return this->c.rend();};

};

#endif