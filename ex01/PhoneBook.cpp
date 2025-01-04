/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akretov <akretov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 17:50:54 by akretov           #+#    #+#             */
/*   Updated: 2025/01/04 16:02:42 by akretov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

class Contact {
    private:
        std::string name;
        std::string phoneNumber;

    public:
        // Constructor with different parameter names
        Contact(std::string contactName = "", std::string contactPhoneNumber = "") {
            name = contactName;           // No ambiguity, so no need for 'this->'
            phoneNumber = contactPhoneNumber; // No ambiguity
    }
};
