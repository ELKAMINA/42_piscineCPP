#ifndef ARRAY_CLASS_HPP
# define ARRAY_CLASS_HPP
#include <stdexcept>
#include <iostream>
#include <string.h>
#include <cstddef>


template<typename T>
class Array
{
    public: 
        Array<T>(void) 
        {
            _tab = new T[0];
            _size_tab = 0;
        };
        Array<T>(unsigned int n)
        { 
            _size_tab = n;
            _tab = new T[n]; 
            for (int i = 0; i < n; i++)
            {
                _tab[i] = 0;
            }
        };
        Array<T>(Array<T> const & src)
        {
            this->_size_tab = src._size_tab;
            _tab = new T(src._size_tab);
            for (unsigned int i = 0; i < src._size_tab; i++)
            {
                this->_tab[i] = src._tab[i];
            }
            *this = src;
        };
        Array<T>& operator=(Array<T> const & rhs)
        {
            delete [] _tab;
            this->_size_tab = rhs._size_tab;
            _tab = new T[rhs._size_tab];
            for (unsigned int i = 0; i < rhs._size_tab; i++)
            {
                this->_tab[i] = rhs._tab[i];
            }
           return (*this);
        };
        T& operator[](unsigned int index)
        {   
            if (index >= _size_tab)
            {
                InexistingIndex exc;
                throw exc;
            }
            // std::cout << "From HPP : " << _tab[index] << std::endl;
            return _tab[index]; 
        };
        ~Array( void )
        {
            delete [] _tab;
        }
        unsigned int size()
        {
            return _size_tab;
        }
        class InexistingIndex : public std::exception
        {
            public: 
                virtual const char* what() const throw()
                {
                    return ("Invalid Index");
                }
        };

    private : 
        T*       _tab;
        unsigned _size_tab;
};

#endif
