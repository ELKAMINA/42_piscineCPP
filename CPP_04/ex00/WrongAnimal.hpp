#ifndef WRONGANIMAL_CLASS_H
# define WRONGANIMAL_CLASS_H
#include <iostream>

// Appeler une fction du meme nom qui E dans une classe mere = ovveride de fnction

class WrongAnimal
{
    public :
		WrongAnimal();
		WrongAnimal(const WrongAnimal&);
		WrongAnimal(std::string type);
		WrongAnimal& operator=(WrongAnimal const &);
		virtual void makeSound() const;
		~WrongAnimal();
	
	protected :
		std::string	_type;
};

#endif