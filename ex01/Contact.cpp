/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akretov <akretov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 17:08:06 by akretov           #+#    #+#             */
/*   Updated: 2025/01/08 18:54:12 by akretov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.hpp"
#include "Contact.hpp"

// Constructor: no need for _index
Contact::Contact(const std::string& _firstName, const std::string& _lastName,
                 const std::string& _nickname, const std::string& _darkestSecret, const std::string& _phoneNumber)
    : _firstName(_firstName), _lastName(_lastName), _nickname(_nickname),
      _darkestSecret(_darkestSecret), _phoneNumber(_phoneNumber) {}

Contact::~Contact(void) {}

std::string Contact::truncate(std::string str, int colWidth) const {
    if (str.length() > (unsigned long)colWidth) {
        return str.substr(0, colWidth - 1) + ".";  // Truncate and append a dot
    }
    return str;
}

void Contact::setContact(const std::string& _firstName, const std::string& _lastName, 
                         const std::string& _nickname, const std::string& _darkestSecret, const std::string& _phoneNumber) {
    this->_firstName = _firstName;
    this->_lastName = _lastName;
    this->_nickname = _nickname;
    this->_darkestSecret = _darkestSecret;
    this->_phoneNumber = _phoneNumber;
}

void Contact::displayContact(int colWidth) const {
    // Using std::setw to ensure the text fits in each column of width 10
    std::cout << "|" << std::setw(colWidth) << std::right << truncate(_firstName, colWidth)
              << "|" << std::setw(colWidth) << std::right << truncate(_lastName, colWidth)
              << "|" << std::setw(colWidth) << std::right << truncate(_nickname, colWidth)
              << "|" << std::setw(colWidth) << std::right << truncate(_phoneNumber, colWidth)
              << "|" << std::endl;
}