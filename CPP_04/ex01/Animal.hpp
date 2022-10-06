#ifndef ANIMAL_CLASS_H
# define ANIMAL_CLASS_H
#include <iostream>

// Appeler une fction du meme nom qui E dans une classe mere = ovveride de fnction

class Animal
{
    public :
		Animal();
		Animal(const Animal& twins);
		Animal(std::string type);
		Animal& operator=(Animal const &);
		virtual ~Animal();
		std::string	getType() const;
		void		setType(std::string type);
		virtual void makeSound() const;
	
	protected :
		std::string	_type;
};

#endif