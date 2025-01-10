/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akretov <akretov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 17:28:03 by akretov           #+#    #+#             */
/*   Updated: 2025/01/10 18:27:07 by akretov          ###   ########.fr       */
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
}

bool	Account::makeWithdrawal( int withdrawal ) {
    if (withdrawal > _amount)
        return (false);
    else {
        _totalAmount-= withdrawal; 
        _amount -= withdrawal;
        _nbWithdrawals++;
        _totalNbWithdrawals++;
    }
    return true;
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
    std::time_t t = std::time(nullptr);
    std::tm* localTime = std::localtime(&t);
        // Print the time in the desired format
    std::cout << "[" 
              << (1900 + localTime->tm_year)  // Year (current year - 1900)
              << std::setfill('0') << std::setw(2) << (localTime->tm_mon + 1)  // Month (1-12)
              << std::setfill('0') << std::setw(2) << localTime->tm_mday  // Day (1-31)
              << "_"
              << std::setfill('0') << std::setw(2) << localTime->tm_hour  // Hour (0-23)
              << std::setfill('0') << std::setw(2) << localTime->tm_min   // Minute (0-59)
              << std::setfill('0') << std::setw(2) << localTime->tm_sec   // Second (0-59)
              << "]"
              << std::endl;

}
