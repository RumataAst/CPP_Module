/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akretov <akretov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 17:08:06 by akretov           #+#    #+#             */
/*   Updated: 2025/01/07 17:55:17 by akretov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.hpp"
#include "Contact.hpp"

Contact::Contact(int _index, const std::string& _firstName, const std::string& _lastName,
                 const std::string& _nickname, const std::string& _darkestSecret, const std::string& _phoneNumber)
    : _index(_index), _firstName(_firstName), _lastName(_lastName), _nickname(_nickname),
      _darkestSecret(_darkestSecret), _phoneNumber(_phoneNumber) {}

Contact::~Contact (void) {
    std::cout << "Contact was destroyed" << std::endl;
}

void  Contact::setContact (int&        _index, const std::string& _firstName, const std::string& _lastName, 
                    const std::string& _nickname, const std::string& _darkestSecret, const std::string& _phoneNumber) {
                      
                    }

void Contact::displayContact(void) const {
    std::cout << "Index: " << _index << std::endl;
    std::cout << "First Name: " << _firstName << std::endl;
    std::cout << "Last Name: " << _lastName << std::endl;
    std::cout << "Nickname: " << _nickname << std::endl;
}  