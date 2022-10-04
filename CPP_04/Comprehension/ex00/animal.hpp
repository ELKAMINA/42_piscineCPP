#ifndef ANIMAL_CLASS_H
# define ANIMAL_CLASS_H
#include <iostream>

// Appeler une fction du meme nom qui E dans une classe mere = ovveride de fnction

class Animal
{
    public :
		Animal();
		Animal(const Animal&);
		Animal(std::string type);
		Animal& operator=(Animal const &);
		virtual std::string	getType() const;
		virtual void makeSound() const;
		~Animal();
	
	protected :
		std::string	_type;
};

#endif