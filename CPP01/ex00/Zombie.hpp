#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

class Zombie
{
    public :
        Zombie( void );
        ~Zombie( void );
        void            announce( void ) const;
        std::string     getname( void ) const;
        void            setname(std::string smiya);
    
    private : 
        std::string _name;
};

#endif