#include "Account.hpp"
#include <iostream>

Account::Account(int initial_deposit)
{
    this->_accountIndex = Account::_nbAccounts;
    this->_amount = initial_deposit;
    Account::_nbAccounts++;
    Account::_totalAmount += initial_deposit;
    std::cout << "index:" << this->_accountIndex << ";amount:" << initial_deposit << ";created\n";
}

Account::~Account(void)
{
    std::cout << "index:" << this->_accountIndex << "\n";
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
    return Account::_totalNbWithdrawals;
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

    for (int i = 0; i < getNbAccounts(); i++)
    {
        std::cout << "index:" << i << ";";
        std::cout << "amount:" << "..." << ";";
        std::cout << "deposits:" << getNbDeposits() << ";";
        std::cout << "withdrawals:" << getNbWithdrawals();
        std::cout << "\n";
    }

}

void	Account::makeDeposit( int deposit )
{
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << "..." << ";";
    std::cout << "diposit:" << deposit << ";";
    std::cout << "deposits:" << getNbDeposits() << ";";
    std::cout << "withdrawals:" << getNbWithdrawals();
    std::cout << "\n";
}

bool    Account::makeWithdrawal(int withdrawl)
{
 return true;
}

int     Account::checkAmount(void) const
{
    return this->_amount;
}

void    Account::displayStatus(void) const
{

}

void    Account::_displayTimestamp(void)
{

}

int     Account::_nbAccounts = 0;
int     Account::_totalAmount = 0;
int     Account::_totalNbDeposits = 0;
int     Account::_totalNbWithdrawals = 0;
