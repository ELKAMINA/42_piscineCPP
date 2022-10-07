#include <stdexcept>
#include <iostream>

void    test1()
{
    try // Essayer de faire quelque chose qui pourra renvoyer une exception
    {
        // Faire quelque chose 
        if (/* il y'a une erreur*/)
        {
            throw std::exception(); // Va remonter jusqu'à un bloc "Catch" et essayer de catcher une exception
        }
        else
        {

        }
        
    }
    catch(const std::exception& e) // Ici, on essaie d recuperer l'exception
    {
        std::cerr << e.what() << '\n';
    }
    
}

void    test2()
{
    try // Essayer de faire quelque chose qui pourra renvoyer une exception
    {
        // Faire quelque chose 
        if (/* il y'a une erreur*/)
        {
            throw std::exception(); // Va remonter jusqu'à un bloc "Catch" et essayer de catcher une exception
        }
        else
        {

        }
        
    }
}

void    test3()
{
    try // Essayer de faire quelque chose qui pourra renvoyer une exception
    {
       test2(); 
    }
    catch  (std::exception& e)
    {
        //Handle error
    }
}

void    test4
{
    class PEBKACException : public std::exception
    {
        public: 
            virtual const char* what() const throw()
            {
                return ("Problem exists between keyboard and chair");
            }
    };
    try // Essayer de faire quelque chose qui pourra renvoyer une exception
    {
       test3(); 
    }
    catch  (PEBKACExceptions& e) // Catch specifique
    {
        //Handle the fact that the user is an idiot
    }
    catch  (std::exception& e) // catch generique
    {
        //Handle error
    }
    // il existe egalement catch qui va ger toutes les exceptions possibles 
}

// ATTENTION, thorw une exception => couteux en ressources. Si on sait que ca va renvoyer souvent une erreur, on utilise les retours de base. Si cest une erreur exceptionnelle => Exceptions(open, ostream)