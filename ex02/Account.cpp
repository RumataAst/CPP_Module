/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akretov <akretov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 17:28:03 by akretov           #+#    #+#             */
/*   Updated: 2025/01/11 19:00:44 by akretov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream> // For display purposes
#include <ctime>    // For timestamp
#include <iomanip>  // For setfill

// Static member variables initialization
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

// Constructor: initializes account with the initial deposit
Account::Account(int initial_deposit) 
    : _accountIndex(_nbAccounts), _amount(initial_deposit), 
      _nbDeposits(0), _nbWithdrawals(0) {

    _nbAccounts++;
    _totalAmount += initial_deposit;
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";"
        << "amount:" << _amount << ";"
        << "created" << std::endl;
}

Account::~Account() {
    _nbAccounts--;
    _totalAmount -= _amount;
    _displayTimestamp ();
    std::cout << " index:" << _accountIndex << ";"
        << "amount:" << _amount << ";"
        << "closed" << std::endl;
}

void Account::makeDeposit (int deposit) {
    _totalNbDeposits++;
    _nbDeposits++;
    _totalAmount += deposit;
    _amount += deposit;
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";"
        << "p_amount:" << _amount - deposit << ";"
        << "deposit:" << deposit << ";"
        << "amount:" << _amount << ";"
        << "nb_deposits:" << _nbDeposits
        << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ) {
    _displayTimestamp();
    if (withdrawal > _amount) {
        std::cout << " index:" << _accountIndex << ";"
        << "p_amount:" << _amount << ";"
        << "withdrawal:refused" 
        << std::endl;
        return (false);
    }
    else {
        _totalAmount-= withdrawal; 
        _amount -= withdrawal;
        _nbWithdrawals++;
        _totalNbWithdrawals++;
        std::cout << " index:" << _accountIndex << ";"
            << "p_amount:" << _amount + withdrawal  << ";"
            << "withdrawal:" << withdrawal << ";"
            << "amount:" << _amount << ";"
            << "nb_withdrawals:" << _nbWithdrawals
            << std::endl;
    }
    return true;
}

void    Account::displayStatus (void) const{
        _displayTimestamp();
        std::cout << " index:" << _accountIndex << ";"
        << "amount:" << _amount  << ";"
        << "deposits:" << _nbDeposits << ";"
        << "withdrawals:" << _nbWithdrawals
        << std::endl;
}

void	Account::displayAccountsInfos( void ) {
        _displayTimestamp();
        std::cout << " accounts:" << _nbAccounts << ";"
        << "total:" << _totalAmount  << ";"
        << "deposits:" << _totalNbDeposits << ";"
        << "withdrawals:" << _totalNbWithdrawals
        << std::endl;
}

int	Account::getNbAccounts( void ) {
    return _nbAccounts;
}

int	Account::getTotalAmount( void ){
    return _totalAmount;
}

int Account::getNbDeposits(void) {
    return _totalNbDeposits;
}

int Account::getNbWithdrawals(void) {
    return _totalNbWithdrawals;
}

void	Account::_displayTimestamp( void ) {
    std::time_t t = std::time(NULL);
    std::tm* localTime = std::localtime(&t);
    std::cout << "[" 
              << (1900 + localTime->tm_year)
              << std::setfill('0') << std::setw(2) << (localTime->tm_mon + 1)
              << std::setfill('0') << std::setw(2) << localTime->tm_mday
              << "_"
              << std::setfill('0') << std::setw(2) << localTime->tm_hour
              << std::setfill('0') << std::setw(2) << localTime->tm_min
              << std::setfill('0') << std::setw(2) << localTime->tm_sec
              << "]";
}
