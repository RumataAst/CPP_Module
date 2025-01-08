/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akretov <akretov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 17:50:54 by akretov           #+#    #+#             */
/*   Updated: 2025/01/08 18:59:50 by akretov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.hpp"
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : _columnWidth(10), _currentIndex(0) {}

PhoneBook::~PhoneBook(void) {}

void PhoneBook::setColumnWidth(int width) {
    _columnWidth = width;
}

int PhoneBook::getColumnWidth(void) const {
    return _columnWidth;
}

void PhoneBook::addContact(const Contact& contact) {
    // Add the contact using the currentIndex
    contacts[_currentIndex].setContact(contact.getFirstName(), contact.getLastName(),
                                       contact.getNickname(), contact.getDarkestSecret(),
                                       contact.getPhoneNumber());

    // Move to the next index, wrapping back to 0 if we reach 8
    _currentIndex = (_currentIndex + 1) % 8;
}

void PhoneBook::displayPhoneBook(int _columnWidth) const {
    std::cout << "---------------------------------------------" << std::endl;
    std::cout << "|  Index  | First Name | Last Name | Nickname |" << std::endl;
    std::cout << "---------------------------------------------" << std::endl;

    // Display each contact in the phonebook
    for (int i = 0; i < 8; ++i) {
        // If the contact has data (i.e., first name is not empty), display it
        if (!contacts[i].getFirstName().empty()) {
            // Display the index (i + 1) in the first column
            std::cout << "|" << std::setw(_columnWidth) << std::right << i + 1  // Printing the actual index
                      << "|" << std::setw(_columnWidth) << std::right << contacts[i].getFirstName()
                      << "|" << std::setw(_columnWidth) << std::right << contacts[i].getLastName()
                      << "|" << std::setw(_columnWidth) << std::right << contacts[i].getNickname()
                      << "|" << std::endl;
        }
    }
}