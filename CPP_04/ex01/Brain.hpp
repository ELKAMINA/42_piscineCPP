#ifndef BRAIN_CLASS_H
# define BRAIN_CLASS_H
#include <iostream>

// Appeler une fction du meme nom qui E dans une classe mere = ovveride de fnction

class Brain
{
    public :
        Brain();
        Brain(const Brain& twins);
        ~Brain();
        Brain& operator=(Brain const &);
        std::string getIdea(int index) const;
        void    setIdea(int index, std::string idea);

    private :
        std::string _ideas[100];
};

#endif