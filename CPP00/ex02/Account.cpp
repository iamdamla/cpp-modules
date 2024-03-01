#include "Account.hpp"


int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(void)
{
    return (Account::_nbAccounts);
}

int Account::getTotalAmount(void)
{
    return (Account::_totalAmount);
}

int Account::getNbDeposits(void)
{
    return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
    return (Account::_totalNbWithdrawals);
}
int Account::checkAmount(void) const
{
    return (this->_amount);
}
Account::Account(int initial_deposit): _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
    std::cout << "\033[1;31m";
    _accountIndex = _nbAccounts;
    _nbAccounts++;
    _totalAmount += initial_deposit;
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->checkAmount() << ";created" << std::endl;
}

Account::~Account(void)
{
    std::cout << "\033[1;31m";
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
   // _nbAccounts--;
}
void Account::_displayTimestamp(void)
{
    std::time_t now = time(0);
    char str[19];

    if(std::strftime(str, sizeof(str), "[%Y%m%d_%H%M%S] ", std::localtime(&now)))
        std::cout << str;
}

 void	Account::displayAccountsInfos( void )
 {
    std::cout << "\033[1;33m";
   _displayTimestamp();
    std::cout << "accounts:" << Account::getNbAccounts();
    std::cout << ";total:" << Account::getTotalAmount();
    std::cout << ";deposits:" << Account::getNbDeposits();
    std::cout << ";withdrawals:" << Account::getNbWithdrawals() << std::endl;

 }

 void	Account::makeDeposit( int deposit )
 {
    std::cout << "\033[1;35m";
   _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->checkAmount();
    std::cout << ";desposit:" << deposit;
    _amount += deposit;
    std::cout << ";amount:" << _amount;
    _totalAmount += deposit;
    _nbDeposits += 1;
     std::cout << ";nb_deposits:" << _nbDeposits << std::endl;
    _totalNbDeposits += 1;

 }

void	Account::displayStatus( void ) const
{
    std::cout << "\033[1;32m";
    _displayTimestamp();
     std::cout << "index:" << this->_accountIndex << ";amount:" << this->checkAmount();
     std::cout << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    std::cout <<"\033[34m";
    if(withdrawal <= _amount)
    {
        _displayTimestamp();
         std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->checkAmount() << ";withdrawal:" << withdrawal;
        _amount -= withdrawal;
        _nbWithdrawals++;
        _totalNbWithdrawals++;
        _totalAmount -= withdrawal;
        std::cout << ";p_amount:" << this->checkAmount() << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
        return (true);
    }
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->checkAmount();
    std::cout << ";withdrawal:refused" <<  std::endl;
    return (false);
}
