/*  Static = Variables qui existent au niveau de la classe et non au niveau de l'instance. On les appelles les variables ou fonctions de la classe et non de l'instance. Attributs non membres et fctions non membres. --- STATIC ----        */

/*  Une donnee statique est une donne qui na de limportance quau niveau de la classe et non des instances      */

/*  EN c++, quand on cree une classe et quon lui affecte des fonctions membres, une instance est automqtiauement passe en param pour pvooir utiliser le pointeur THIS or pour les STATIC : NOOOON  */

/*  LEs attributs non membres ne sont pas initialises dans des constructeurs. L'initialisation se fait dans le .cpp en dehors de toutes les fctions/contruct/destruct*/

/*  dans les fct ou attributs non membres, quand on return, on return tel que :

	return Sample:: _nbInst;
*/

#include "./Account.hpp"
#include <iostream>
#include <string>

Account::Account(int initial_deposit)
{
	std::cout << "Je suis le constructeur" << std::endl;
	std::cout << "TIME A METTRE ICI";
	std::cout << "index:"  << this->_accountIndex;
	std::cout << ";amount:"  << this->_amount;
	std::cout << ";created" << std::endl;  

}

Account::~Account( void )
{
	std::cout << "Je suis le destructeur" << std::endl;
}






static int	getNbAccounts( void );
static int	getTotalAmount( void );
static int	getNbDeposits( void );
static int	getNbWithdrawals( void );
static void	displayAccountsInfos( void );
static void	_displayTimestamp( void );
void	makeDeposit( int deposit );
bool	makeWithdrawal( int withdrawal );
int		checkAmount( void ) const;
void	displayStatus( void ) const;

static int	_nbAccounts = 0;
static int	_totalAmount = 0;
static int	_totalNbDeposits = 0;
static int	_totalNbWithdrawals = 0;