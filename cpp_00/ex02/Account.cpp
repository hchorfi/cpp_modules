#include "Account.hpp"
#include <iostream>

Account::Account(int initial_deposit)
{
    this->_accountIndex = Account::_nbAccounts;
    this->_amount = initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    Account::_nbAccounts++;
    Account::_totalAmount += initial_deposit;
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "created\n";
}

Account::~Account(void)
{
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "closed\n";
}

int     Account::getNbAccounts(void)
{
    return Account::_nbAccounts;
}

int     Account::getTotalAmount(void)
{
    return Account::_totalAmount;
}

int     Account::getNbDeposits(void)
{
    return Account::_totalNbDeposits;
}

int     Account::getNbWithdrawals(void)
{
    return Account::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void )
{
    std::cout << "acounts:" << getNbAccounts() << ";";
    std::cout << "total:" << getTotalAmount() << ";";
    std::cout << "deposits:" << getNbDeposits() << ";";
    std::cout << "withdrawals:" << getNbWithdrawals() << ";";
    std::cout << "\n";
}

void	Account::makeDeposit( int deposit )
{
    if (deposit > 0)
    {
        this->_nbDeposits++;
        Account::_totalNbDeposits++;
    }
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "p_amount:" << this->_amount << ";";
    std::cout << "diposit:" << deposit << ";";
    this->_amount += deposit;
    Account::_totalAmount += deposit;
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "nb_deposits:" << this->_nbDeposits;
    std::cout << "\n";
}

bool    Account::makeWithdrawal(int withdrawl)
{
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "p_amount:" << this->_amount << ";";
    if (withdrawl > this->_amount)
    {
        std::cout << "withdrawal:refused\n";
        return false;
    }
    this->_nbWithdrawals++;
    Account::_totalNbWithdrawals++;
    this->_amount -= withdrawl;
    this->_totalAmount -= withdrawl;
    std::cout << "withdrawal:" << this->_amount << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "nb_withrawals:" << this->_nbWithdrawals << ";";
    std::cout << "\n";
    return true;
}

int     Account::checkAmount(void) const
{
    return this->_amount;
}

void    Account::displayStatus(void) const
{
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "diposits:" << this->_nbDeposits << ";";
    std::cout << "withdrawals:" << this->_nbWithdrawals << ";\n";
}

void    Account::_displayTimestamp(void)
{

}

int     Account::_nbAccounts = 0;
int     Account::_totalAmount = 0;
int     Account::_totalNbDeposits = 0;
int     Account::_totalNbWithdrawals = 0;
