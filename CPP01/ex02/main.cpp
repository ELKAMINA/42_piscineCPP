#include <iostream>
#include <cstring>

int	main()
{
	std::string		str = "HI THIS IS BRAIN";
	std::string* 	stringPTR = &str; // Pointeur sur la variable str
	std::string&	stringREF = str; // Reference sur la variable str

	/* Afficher l'adresse de la string */
	std::cout << "Adresse de la string ===> " << &str << std::endl;

	/* Afficher l'adresse stockee dans stringPTR */
	std::cout << "Adresse stockee dans stringPTR ===> " << stringPTR << std::endl;
	
	/* Afficher l'adresse stockee dans stringREF */
	std::cout << "Adresse stockee dans stringREF ===> " << &stringREF << std::endl;

	/* Afficher la valeur de la string  */
	std::cout << "Valeur de la string : " << str << std::endl;

	/* Afficher la valeur pointee par stringPTR */
	std::cout << "valeur  pointee par stringPTR ===> " << *stringPTR << std::endl;
	
	/* Afficher la valeur pointee par stringREF */
	std::cout << "Adresse  pointee par stringREF ===> " << stringREF << std::endl;
}