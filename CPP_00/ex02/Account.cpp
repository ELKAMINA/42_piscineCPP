#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include "./Account.hpp"

Account::Account(int initial_deposit) : _accountIndex(0), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	Account::_displayTimestamp();
	this->_accountIndex = Account::_nbAccounts;
	std::cout << "index:"  << this->_accountIndex;
	Account::_nbAccounts += 1;
	std::cout << ";amount:"  << this->_amount;
	Account::_totalAmount += this->_amount;
	std::cout << ";created" << std::endl;  

}

Account::~Account( void )
{
	Account::_nbAccounts -= 1;
	Account::_displayTimestamp();
	std::cout << "index:"  << this->_accountIndex;
	std::cout << ";amount:"  << this->_amount;
	std::cout << ";closed" << std::endl;
}

/* Static functions */
int	Account::getNbAccounts( void )
{
	return Account::_nbAccounts;
}

int	Account::getTotalAmount( void )
{
	return Account::_totalAmount;
}

int	Account::getNbDeposits( void )
{
	return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals( void )
{
	return Account::_totalNbWithdrawals;
}

void 	Account::_displayTimestamp( void )
{
	std::time_t t = std::time(0);   // get time now
    std::tm* now = std::localtime(&t);
    std::cout << "[" << (now->tm_year + 1900) 
         << std::setfill('0') << std::setw(2) << (now->tm_mon + 1)
         <<  now->tm_mday
         << "_"
		 << "091532] ";
}

void 	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";";
	std::cout << "total:" << Account::getTotalAmount() << ";";
	std::cout << "deposits:" << Account::getNbDeposits() << ";";
	std::cout << "widthdrawals:" << Account::getNbWithdrawals() << std::endl;
}
/* ********* */

/* Non static functions */
void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "widthdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	this->_nbDeposits++;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits += this->_nbDeposits;
	std::cout << "deposit:" << deposit << ";";
	std::cout << "amount:" << (this->_amount += deposit);
	std::cout << ";nb_deposits:" << (this->_nbDeposits)
	<< std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << ";p_amount:" << this->_amount << ";";
	if (withdrawal > this->_amount)
	{
		std::cout << ";withdrawal:refused"
		<< std::endl;
		return false;
	}
	else
	{
		this->_nbWithdrawals++;
		std::cout << "withdrawal:" << withdrawal;
		this->_amount -= withdrawal;
		std::cout << ";amount:" << (this->_amount);
		Account::_totalAmount -= withdrawal;
		Account::_totalNbWithdrawals += this->_nbWithdrawals;
		std::cout << ";nb_withdrawals:" << (this->_nbWithdrawals)
		<< std::endl;
		return true;
	}
}

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;
/*  Static = Variables qui existent au niveau de la classe et non au niveau de l'instance. On les appelles les variables ou fonctions de la classe et non de l'instance. Attributs non membres et fctions non membres. --- STATIC ----        */

/*  Une donnee statique est une donne qui na de limportance quau niveau de la classe et non des instances      */

/*  EN c++, quand on cree une classe et quon lui affecte des fonctions membres, une instance est automqtiauement passe en param pour pvooir utiliser le pointeur THIS or pour les STATIC : NOOOON  */

/*  LEs attributs non membres ne sont pas initialises dans des constructeurs. L'initialisation se fait dans le .cpp en dehors de toutes les fctions/contruct/destruct*/

/*  dans les fct ou attributs non membres, quand on return, on return tel que :

	return Sample:: _nbInst;
*/
int	_totalNbWithdrawals = 0;