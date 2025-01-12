/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akretov <akretov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 16:22:04 by akretov           #+#    #+#             */
/*   Updated: 2025/01/12 16:16:13 by akretov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     PHONE_BOOK_HPP
# define    PHONE_BOOK_HPP

#include "functions.hpp"
#include <iostream>
#include <cstring>
#include <string>
#include <limits>
#include <cstdlib> 
#include <iomanip> 

class PhoneBook {
private:
    Contact contacts[8];
    int     _columnWidth;
    int     _currentIndex;

public:
    PhoneBook();
    ~PhoneBook();

    void setColumnWidth(int width = 10);
    int getColumnWidth(void) const;

    void addContact (void);
    void displayPhoneBook(void) const;
};

#endif
