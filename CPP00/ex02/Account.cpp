#include "Account.hpp"
#include <iostream>
# include <ctime>
# include <iomanip>

static void	display_time(void)
{
	const time_t	now = time(0);
	tm				*ltm = localtime(&now);

	std::cout << "[";
    std::cout << 1900 + ltm->tm_year;
    // month starts at 0;
    std::cout << std::setfill('0') << std::setw(2) << 1 + ltm->tm_mon;
    std::cout << std::setfill('0') << std::setw(2) << ltm->tm_mday;
    std::cout << "_";
    std::cout << std::setfill('0') << std::setw(2) << ltm->tm_hour;
    std::cout << std::setfill('0') << std::setw(2) << ltm->tm_min;
    std::cout << std::setfill('0') << std::setw(2) << ltm->tm_sec;
    std::cout << "] ";
}

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}
int	Account::checkAmount(void) const
{
	return (_amount);
}

void	Account::displayAccountsInfos( void )
{
	std::cout << "Number of accounts: " << getNbAccounts() << std::endl;
	std::cout << "Totals amounts of all accounts: " << getTotalAmount() << std::endl;
	std::cout << "Number of deposits: " << getNbDeposits() << std::endl;
	std::cout << "Total number of withdrawals: " << &getNbWithdrawals << std::endl;
	std::cout << std::endl;
}

Account::Account(int initial_deposit)
    : _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
    _accountIndex = _nbAccounts++;
    _totalAmount += initial_deposit;
    _totalNbDeposits++;
    _totalNbWithdrawals++;

    display_time();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account()
{
    _nbAccounts--;
    _totalAmount -= _amount;

    display_time();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}


void	Account::makeDeposit( int deposit )
{
	display_time();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";
	std::cout << "deposit:" << deposit << ";";
	_amount += deposit;
	_totalAmount += deposit;
	std::cout << "amount:" << _amount << ";";
	_nbDeposits++;
	_totalNbDeposits++;
	std::cout << "nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	display_time();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";
	std::cout << "withdrawal:";
	if (_amount < withdrawal)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	std::cout << withdrawal << ";";
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	std::cout << "amount:" << _amount << ";";
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	std::cout << "nb_withdrawals:" << _nbWithdrawals << std::endl;
	return (true);
}

void	Account::displayStatus( void ) const
{
	display_time();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}