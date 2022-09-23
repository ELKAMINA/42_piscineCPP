#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

class Zombie
{
    public :
        Zombie( void );
        ~Zombie( void );
        std::string     getname( void ) const;
        void            setname(std::string smiya);
        void            setindex(int i);
        int             getindex( void );
    
    private : 
        int index;
        std::string _name;
};

#endif