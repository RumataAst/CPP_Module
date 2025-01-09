/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akretov <akretov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 17:08:06 by akretov           #+#    #+#             */
/*   Updated: 2025/01/09 18:20:50 by akretov          ###   ########.fr       */
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

void Contact::setValidatedStringInput(std::string& input, const std::string& prompt) {
    bool isOnlySpaces = false;

    do {
        std::cout << prompt;
        std::getline(std::cin, input);

        // Check if the input is just spaces or tabs
        isOnlySpaces = true;
        for (size_t i = 0; i < input.length(); ++i) {
            if (input[i] != ' ' && input[i] != '\t') {
                isOnlySpaces = false;
                break;
            }
        }

        if (isOnlySpaces) {
            std::cout << "Input cannot be just spaces or tabs. Please try again." << std::endl;
        }
        // Check for empty input
        else if (input.empty()) {
            std::cout << "Input cannot be empty. Please try again." << std::endl;
        }
        // Check for input length
        else if (input.length() > 20) {
            std::cout << "Input is too long! Maximum length is 20 characters. Please try again." << std::endl;
        }
        // Check for only letters in the input
        else {
            bool isValid = true;
            for (size_t i = 0; i < input.length(); ++i) {
                if (!isalpha(input[i])) {  // Check if the character is not a letter
                    isValid = false;
                    break;
                }
            }

            if (!isValid) {
                std::cout << "Input must contain only letters. Please try again." << std::endl;
            }
        }
    } while (input.empty() || input.length() > 20 || isOnlySpaces || !isalpha(input[0]));
}

void Contact::setValidatedPhoneNumber(std::string& input, const std::string& prompt) {
    bool isOnlySpaces = false;
    bool isValidPhone = false;

    do {
        std::cout << prompt;
        std::getline(std::cin, input);

        // Check if the input is just spaces or tabs
        isOnlySpaces = true;
        for (size_t i = 0; i < input.length(); ++i) {
            if (input[i] != ' ' && input[i] != '\t') {
                isOnlySpaces = false;
                break;
            }
        }

        if (isOnlySpaces) {
            std::cout << "Input cannot be just spaces or tabs. Please try again." << std::endl;
        }
        // Check for empty input
        else if (input.empty()) {
            std::cout << "Input cannot be empty. Please try again." << std::endl;
        }
        // Check for input length
        else if (input.length() > 20) {
            std::cout << "Input is too long! Maximum length is 20 characters. Please try again." << std::endl;
        }
        // Check for valid phone number format
        else {
            isValidPhone = true;

            if (input[0] == '+') {
                // If the first character is +, check if the rest are digits
                for (size_t i = 1; i < input.length(); ++i) {
                    if (input[i] < '0' || input[i] > '9') {
                        isValidPhone = false;
                        break;
                    }
                }
            } else {
                // If there is no + at the beginning, ensure all characters are digits
                for (size_t i = 0; i < input.length(); ++i) {
                    if (input[i] < '0' || input[i] > '9') {
                        isValidPhone = false;
                        break;
                    }
                }
            }

            if (!isValidPhone) {
                std::cout << "Invalid phone number! Only numbers are allowed after '+'." << std::endl;
            }
        }
    } while (input.empty() || input.length() > 20 || isOnlySpaces || !isValidPhone);
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