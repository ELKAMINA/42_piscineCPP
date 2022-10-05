#ifndef DOG_CLASS_H
# define DOG_CLASS_H
#include <iostream>
#include "./Animal.hpp"
#include "./Brain.hpp"

// Appeler une fction du meme nom qui E dans une classe mere = ovveride de fnction

class Dog : public Animal
{
    public :
		Dog();
		Dog(const Dog& twin);
		~Dog();
		Dog& operator=(Dog const &);
		virtual void makeSound() const;
		Brain* getBrain() const;

	private :
		Brain* _cerveau;
};

#endif