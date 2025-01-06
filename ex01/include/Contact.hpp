/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akretov <akretov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 17:07:16 by akretov           #+#    #+#             */
/*   Updated: 2025/01/06 17:57:00 by akretov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include "functions.hpp"

class Contact {
private:
    int         _index;
    std::string _firstName;
    std::string _lastName;
    std::string _nickname;
    std::string _darkestSecret;
    std::string _phoneNumber;

public:
    // Constructor with default arguments
    Contact(int index = -1, const std::string& firstName = "", const std::string& lastName = "",
            const std::string& nickname = "", const std::string& darkestSecret = "", const std::string& phoneNumber = "");

    // Destructor
    ~Contact();

    // Function to set contact information
    void setContact(int& index, const std::string& firstName, const std::string& lastName, 
                    const std::string& nickname, const std::string& darkestSecret, const std::string& phoneNumber);

    // Function to display contact information
    void displayContact() const;
};

#endif
