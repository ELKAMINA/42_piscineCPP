#include "./includes/Base.hpp"
#include "./includes/A_B_C.hpp"
#include <cmath>

// Ici on va utiliser le dynamic cast car marche sur des pointeurs et refe. C'est le plus interessant. Permet de faire des downcst sans pb car si pb, à l'execution, une erreur sera throw
// Utilisé dans le cas de polymorphisme de sous typage (le destructeur est virtuel)
// Renvoie NULL si pas possible dans le cas des pointeurs
// Il faut prévoir une exception dans le cas des références car Ampossi de renvoyer NULL

Base* generate(void)
{
    unsigned int    random = rand() % 30;
    if (random >= 1 && random <= 10)
    {
        std::cout << "---- Generating A ----" << std::endl;
        A* a = new A;
        return (a);
    }
    if (random >= 11 && random <= 21)
    {
        std::cout << "---- Generating B ----" << std::endl;
        B* b = new B;
        return (b);
    }
    if (random >= 12 && random <= 30)
    {
        std::cout << "---- Generating C ----" << std::endl;
        C* c = new C;
        return (c);
    }
    return (NULL);
}

void    identify(Base* p)
{
    A* a = dynamic_cast<A*>(p);
    if (a != NULL)
        std::cout << "It's an A pointer type" << std::endl;
    B* b = dynamic_cast<B*>(p);
    if (b != NULL)
        std::cout << "It's an B pointer type" << std::endl;
    C* c = dynamic_cast<C*>(p);
    if (c != NULL)
        std::cout << "It's an C pointer type" << std::endl;    
}

void    identify(Base& p)
{
    try
    {
        A& a = dynamic_cast<A&>(p);
        std::cout << "Dynamic cast from A succeeded" << std::endl;
    }
    catch(const std::exception& e)
    {
    }
    try
    {
        B& b = dynamic_cast<B&>(p);
        std::cout << "Dynamic cast from B succeeded" << std::endl;
    }
    catch(const std::exception& e)
    {
    }
    try
    {
        C& c = dynamic_cast<C&>(p);
        std::cout << "Dynamic cast from C succeeded" << std::endl;
    }
    catch(const std::exception& e)
    {
    }
}


int main (int argc, char* arg[])
{
	for(int i =0; i < 10; i++)
	{
		Base *p = generate();
		std::cout << "N°" << i << " " << " : ";
		identify(p);
		std::cout << ", ";
		identify(*p);
		std::cout << std::endl;
		delete(p);
	}
}