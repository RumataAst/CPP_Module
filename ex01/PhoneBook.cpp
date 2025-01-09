/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akretov <akretov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 17:50:54 by akretov           #+#    #+#             */
/*   Updated: 2025/01/09 18:52:08 by akretov          ###   ########.fr       */
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

void PhoneBook::addContact (void) {
    // Add the contact using the currentIndex
    contacts[_currentIndex].setContact();

    // Move to the next index, wrapping back to 0 if we reach 8
    _currentIndex = (_currentIndex + 1) % 8;
}

void PhoneBook::displayPhoneBook(void) const {
    // Print the header row
    std::cout << "---------------------------------------------" << std::endl;
    std::cout << "|  Index   |First Name|Last Name | Nickname |" << std::endl;
    std::cout << "---------------------------------------------" << std::endl;

    // Loop over each contact in the phonebook
    for (int i = 0; i < 8; ++i) {  // or use contacts.size() if using dynamic collection
        // If the contact has a first name, display the contact info
        if (!contacts[i].getFirstName().empty()) {
            // Display the index (i + 1) and the contact's details
            std::cout << "|" << std::setw(_columnWidth) << std::right << i + 1
                      << "|";
            contacts[i].displayContact(_columnWidth);  // Calls the method in Contact to handle display
        }
    }
}