#ifndef POLYMPORPHISME_CLASS_H
# define POLYMPORPHISME_CLASS_H
#include <iostream>

// Appeler une fction du meme nom qui E dans une classe mere = ovveride de fnction

class ACharacter
{
    public :
		virtual void attack(std::string const & target) = 0; // => methode pure :  
			// - methode que l'on ne peut pas implementer
			// - Classe ne pourra etre instanciee = classe abstraite
			// Convention : mettre A devant nom de la classe pour identifier les classes abstraites
		void sayHello(std::string const & target);
};

class Warrior : public ACharacter
{
    public :
		virtual void attack(std::string const & target);
};

class ICoffeMaker // Interface = que des comportements abstraits: Pas possible d'avoir des attributs. = C'est une interface pour utliser des objets derives (maniere de definir un comportement)> Tout objet qui herite de la coffe Maker aura ce comportement. Utile : pour definir les interfaces ac d'autres gens avec qui on va travailler.
{
	public :
		virtual void fillWaterTank(IWaterSource * src) = 0;
		virtual Icoffee* make_coffe(std::string const & type) = 0; 
};

#endif