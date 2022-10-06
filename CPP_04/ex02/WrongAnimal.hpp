#ifndef WRONGANIMAL_CLASS_H
# define WRONGANIMAL_CLASS_H
#include <iostream>

// Appeler une fction du meme nom qui E dans une classe mere = ovveride de fnction

// ********  BON A SAVOIR *******
/* A Destructor can be declared as virtual. This causes that the right destructor for the object executes even if the pointer or reference is of a base class type.
On the other hand Constructors cannot be virtual and so technically, no such thing exists as a virtual copy constructor. */

class WrongAnimal
{
    public :
		WrongAnimal();
		WrongAnimal(const WrongAnimal&);
		WrongAnimal(std::string type);
		WrongAnimal& operator=(WrongAnimal const &);
		std::string	getType() const;
		virtual ~WrongAnimal();
		void makeSound() const;
	
	protected :
		std::string	_type;
};

#endif