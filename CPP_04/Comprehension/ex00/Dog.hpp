#ifndef DOG_CLASS_H
# define DOG_CLASS_H
#include <iostream>

// Appeler une fction du meme nom qui E dans une classe mere = ovveride de fnction

class Dog : public Animal
{
    public :
	
	protected :
		std::string	type;
};