/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akretov <akretov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 17:50:54 by akretov           #+#    #+#             */
/*   Updated: 2025/01/07 18:28:49 by akretov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.hpp"
#include "PhoneBook.hpp"

PhoneBook::PhoneBook (void) {}

PhoneBook::~PhoneBook (void) {}

void PhoneBook::addContact (void) {
    if (currentIndex != 8)
        contacts[currentIndex].setContact();
    else 
    {
        currentIndex = 1;
        contacts[currentIndex].setContact();
    }
}

void PhoneBook::listContacts (void) const {
    for (int i = 0; i < 8; i++)
        contacts[i].displayContact();
}
