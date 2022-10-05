#ifndef DOG_CLASS_H
# define DOG_CLASS_H
#include <iostream>
#include "./Animal.hpp"

// Appeler une fction du meme nom qui E dans une classe mere = ovveride de fnction

class Dog : public Animal
{
    public :
		Dog();
		Dog(const Dog&);
		Dog(std::string type);
		~Dog();
		Dog& operator=(Dog const &);
		virtual void makeSound() const;
};

#endif