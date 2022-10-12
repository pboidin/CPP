#include "Account.hpp"
#include <iostream>
#include <string>
#include <iomanip>

int	_nbAccounts = 0;
int	_totalAmount = 0;
int	_totalNbDeposits = 0;
int	_totalNbWithdrawals= 0;

int	Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts: " << Account::getNbAccounts() << std::endl;
	std::cout << "total: " << Account::getTotalAmount() << std::endl;
	std::cout << "deposits: " << Account::getNbDeposits() << std::endl;
	std::cout << "withdrawals: " << Account::getNbWithdrawals() << std::endl;
}

Account::Account(int initial_deposit): _accountIndex(Account::_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	Account::_nbAccounts += 1;
	Account::_totalAmount += initial_deposit;
	Account::_displayTimestamp();
	std::cout << "index: " << this->_accountIndex << std::endl;
	std::cout << "amount: " << this->_amount << std::endl;
	std::cout << "created" << std::endl;
}

Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout << "index: " << this->_accountIndex << std::endl;
	std::cout << "amount: " << this->_amount << std::endl;
	std::cout << "closed" << std::endl;
}

int		Account::checkAmount(void) const
{
	return (this->_amount);
}

void	Account::makeDeposit(int deposit)
{
	int	init;

	init = this->checkAmount();
	this->_amount += deposit;
	this-> _nbDeposits += 1;
	Account::_totalNbDeposits += 1;
	Account::_totalAmount += deposit;
	Account::_displayTimestamp();
	std::cout << "index: " << this->_accountIndex << std::endl;
	std::cout << "init: " << init << std::endl;
	std::cout << "deposit: " << deposit  << std::endl;
	std::cout << "amount: " << this->_amount << std::endl;
	std::cout << "nb_deposits: " << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	int	balance = this->checkAmount();
	if (balance < withdrawal)
	{
		Account::_displayTimestamp();
		std::cout << "index: " << this->_accountIndex << std::endl;
		std::cout << "balance: " << balance << std::endl;
		std::cout << "withdrawal: refused" << std::endl;
		return (0);
	}
	this->_amount -= withdrawal;
	this->_nbWithdrawals += 1;
	Account::_totalAmount -= withdrawal;
	Account::_totalNbWithdrawals += 1;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << std::endl;
	std::cout << "balance:" << balance << std::endl;
	std::cout << "withdrawal:" << withdrawal << std::endl;
	std::cout << "amount:" << this->_amount << std::endl;
	std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return (1);
}

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index: " << this->_accountIndex << std::endl;
	std::cout << "amount: " << this->_amount << std::endl;
	std::cout << "deposits: " << this->_nbDeposits << std::endl;
	std::cout << "withdrawals: " << this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void ) {
	std::time_t t = std::time(0);
	struct tm * now = localtime( & t );
	std::cout << '[' << (now->tm_year + 1900)
	<< std::setw(2) << std::setfill('0') << (now->tm_mon + 1)
	<< std::setw(2) << std::setfill('0') << now->tm_mday
	<< '_'
	<< std::setw(2) << std::setfill('0') << now->tm_hour
	<< std::setw(2) << std::setfill('0') << now->tm_min
	<< std::setw(2) << std::setfill('0') << now->tm_sec << "] ";
}

int	Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";total:" << Account::getTotalAmount() << ";deposits:" << Account::getNbDeposits() << ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}
