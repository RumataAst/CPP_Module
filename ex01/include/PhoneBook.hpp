/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akretov <akretov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 16:22:04 by akretov           #+#    #+#             */
/*   Updated: 2025/01/07 18:28:28 by akretov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     PHONE_BOOK_HPP
# define    PHONE_BOOK_HPP

#include "functions.hpp"

class PhoneBook {
private:
    Contact contacts[8];
    int     currentIndex;

public:
    // Constructor with default arguments
    PhoneBook();
    ~PhoneBook();
    
    void addContact (void);
    void listContacts (void) const;
};

#endif
