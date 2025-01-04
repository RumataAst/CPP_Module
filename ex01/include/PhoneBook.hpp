/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akretov <akretov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 16:22:04 by akretov           #+#    #+#             */
/*   Updated: 2025/01/04 19:36:12 by akretov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     PHONE_BOOK_HPP
# define    PHONE_BOOK_HPP

#include "functions.hpp"

class Contact {
    private:
        std::string name;
        std::string phoneNumber;

    public:
        Contact(std::string contactName = "", std::string contactPhoneNumber = "") {
            name = contactName;
            phoneNumber = contactPhoneNumber;
    }
};  

#endif