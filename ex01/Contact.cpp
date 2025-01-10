/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akretov <akretov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 17:08:06 by akretov           #+#    #+#             */
/*   Updated: 2025/01/10 17:15:49 by akretov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.hpp"
#include "Contact.hpp"

// Constructor: no need for _index
Contact::Contact(const std::string& _firstName, const std::string& _lastName,
                 const std::string& _nickname, const std::string& _phoneNumber, const std::string& _darkestSecret)
    : _firstName(_firstName), _lastName(_lastName), _nickname(_nickname),
      _phoneNumber(_phoneNumber), _darkestSecret(_darkestSecret) {}

Contact::~Contact(void) {}

std::string Contact::truncate(std::string str, int colWidth) const {
    if (str.length() > (unsigned long)colWidth) {
        return str.substr(0, colWidth - 1) + ".";  // Truncate and append a dot
    }
    return str;
}

int Contact::checkSpacesAndLength(const std::string& input) {
    if (input.empty()) {
        std::cout << "Input cannot be empty. Please try again." << std::endl;
        return EMPTY_INPUT;
    }

    bool isOnlySpaces = true;
    for (size_t i = 0; i < input.length(); ++i)  {
        if (!std::isspace(input[i])) {
            isOnlySpaces = false;
            break;
        }
    }
    if (isOnlySpaces) {
        std::cout << "Input cannot be just spaces or tabs. Please try again." << std::endl;
        return ONLY_SPACES;
    }

    if (input.length() > 20) {
        std::cout << "Input is too long! Maximum length is 20 characters. Please try again." << std::endl;
        return TOO_LONG;
    }

    return VALID_INPUT;
}

// Validate string input to allow only alphabetic characters
void Contact::setValidatedStringInput(std::string& input, const std::string& prompt) {
    bool isValid = false;

    do {
        std::cout << prompt;
        std::getline(std::cin, input);

        int checkResult = checkSpacesAndLength(input);
        if (checkResult != VALID_INPUT) {
            continue; // Retry if invalid input
        }

        // Check if input contains only letters
        isValid = true;
        for (size_t i = 0; i < input.length(); ++i)  {
            if (!std::isalpha(input[i]) && input[i] != ' ') {
                isValid = false;
                std::cout << "Input must contain only letters (space is allowed). Please try again." << std::endl;
                break;
            }
        }
    } while (!isValid);
}

// Validate phone number input
void Contact::setValidatedPhoneNumber(std::string& input, const std::string& prompt) {
    bool isValidPhone = false;

    do {
        std::cout << prompt;
        std::getline(std::cin, input);

        int checkResult = checkSpacesAndLength(input);
        if (checkResult != VALID_INPUT) {
            continue; // Retry if invalid input
        }

        // Check if input is a valid phone number
        isValidPhone = true;
        size_t startIndex = 0;

        if (input[0] == '+') {
            startIndex = 1;
        }

        for (size_t i = startIndex; i < input.length(); ++i) {
            if (!std::isdigit(input[i])) {
                isValidPhone = false;
                std::cout << "Invalid phone number! Only numbers are allowed, optionally starting with '+'." << std::endl;
                break;
            }
        }
    } while (!isValidPhone);
}

void Contact::setContact() {
    setValidatedStringInput(this->_firstName, "Enter first name (max 20 characters): ");
    setValidatedStringInput(this->_lastName, "Enter last name (max 20 characters): ");
    setValidatedStringInput(this->_nickname, "Enter nickname (max 20 characters): ");
    setValidatedPhoneNumber(this->_phoneNumber, "Enter phone number (max 20 characters): ");
    setValidatedStringInput(this->_darkestSecret, "Enter darkest secret (max 20 characters): ");
}

void Contact::displayContact(int colWidth) const {
    std::cout   << std::setw(colWidth) << std::right << truncate(_firstName, colWidth)
                << "|" << std::setw(colWidth) << std::right << truncate(_lastName, colWidth)
                << "|" << std::setw(colWidth) << std::right << truncate(_nickname, colWidth)
                << "|" << std::endl;
}