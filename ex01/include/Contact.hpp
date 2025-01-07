/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akretov <akretov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 17:07:16 by akretov           #+#    #+#             */
/*   Updated: 2025/01/07 18:27:40 by akretov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include "functions.hpp"

class Contact {
private:
    int         _index;
    std::string _firstName, _lastName, _nickname, _darkestSecret, _phoneNumber;


public:
    // Constructor with default arguments
    Contact(int         _index = -1, const std::string& _firstName = "", const std::string& _lastName = "",
            const std::string& _nickname = "", const std::string& _darkestSecret = "", const std::string& _phoneNumber = "");
    // Destructor
    ~Contact();

    // Function to set contact information
    void setContact(int&        _index, const std::string& _firstName, const std::string& _lastName, 
                    const std::string& _nickname, const std::string& _darkestSecret, const std::string& _phoneNumber);

    // Function to display contact information
    void displayContact() const;
};

#endif
