#ifndef ANIMAL_CLASS_H
# define ANIMAL_CLASS_H
#include <iostream>

class Animal
{
    public :
        Animal( void );
        Animal( Animal const&);
        ~Animal( void );
        Animal& operator=(Animal const &); // operateur d'assignation = binaire
        void  run(int distance);
        void  Scorn_someone(std::string const & target);
    
    private :
        int _number_of_legs;
};

#endif