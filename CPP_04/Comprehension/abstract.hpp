#ifndef POLYMPORPHISME_CLASS_H
# define POLYMPORPHISME_CLASS_H
#include <iostream>

// Appeler une fction du meme nom qui E dans une classe mere = ovveride de fnction

class Character
{
    public :
		virtual void sayHello(std::string const & target);
};

class Warrior : public Character
{
    public :
		virtual void sayHello(std::string const & target);
};

class Cat
{
	//[...]
};

#endif