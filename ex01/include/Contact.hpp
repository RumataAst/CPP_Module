/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akretov <akretov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 17:07:16 by akretov           #+#    #+#             */
/*   Updated: 2025/01/12 16:15:27 by akretov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include "functions.hpp"
#include <string>
#include <iostream>
#include <iomanip>
#include <cctype>

class Contact {
private:
    std::string _firstName, _lastName, _nickname,  _phoneNumber, _darkestSecret;

    int     checkSpacesAndLength (const std::string& input);
    void    setValidatedStringInput(std::string& input, const std::string& prompt);
    void    setValidatedPhoneNumber(std::string& input, const std::string& prompt);

    std::string getLastName() const { return _lastName; }
    std::string getNickname() const { return _nickname; }
    std::string getPhoneNumber() const { return _phoneNumber; }
    std::string getDarkestSecret() const { return _darkestSecret; }

public:
    // Constructor with default arguments
    Contact(const std::string& _firstName = "", const std::string& _lastName = "",
            const std::string& _nickname = "", const std::string& _phoneNumber = "", const std::string& _darkestSecret = "");

    // Destructor
    ~Contact();

    std::string getFirstName() const { return _firstName; }; 
     // Function to set contact information
    void setContact();


    // Function to display contact information
    void displayContact(int colWidth) const;

    // Function to truncate string for display in the desired format
    std::string truncate(std::string str, int colWidth) const;
};

#endif
