#ifndef DOG_CLASS_H
# define DOG_CLASS_H
#include <iostream>
#include "./animal.hpp"

// Appeler une fction du meme nom qui E dans une classe mere = ovveride de fnction

class Dog : public Animal
{
    public :
		Dog();
		Dog(const Dog&);
		Dog(std::string type);
		Dog& operator=(Dog const &);
		virtual std::string	getType() const;
		virtual void makeSound() const;
		~Dog();
	protected :
		std::string	_type;
};

#endif