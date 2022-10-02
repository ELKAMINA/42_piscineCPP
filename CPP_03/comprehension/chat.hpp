#ifndef CHAT_CLASS_H
# define CHAT_CLASS_H
#include <iostream>
#include "./animal.hpp"

class Chat : public Animal
{
    public :
        Chat( void );
        Chat( Chat const&);
        ~Chat( void );
        Chat& operator=(Chat const &); // operateur d'assignation = binaire
        void  run(int distance);
        void  Scorn_someone(std::string const & target);
    
    private :
        int _number_of_legs;
};

class Pony : public Animal
{
    public :
        Pony( void );
        Pony( Pony const&);
        ~Pony( void );
        Pony& operator=(Pony const &); // operateur d'assignation = binaire
        void  doMagic(std::string const & target);
    
    private :
        int _number_of_legs;
};

#endif