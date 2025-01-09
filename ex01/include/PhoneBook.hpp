/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akretov <akretov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 16:22:04 by akretov           #+#    #+#             */
/*   Updated: 2025/01/09 18:35:22 by akretov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     PHONE_BOOK_HPP
# define    PHONE_BOOK_HPP

#include "functions.hpp"

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

    // Updated method to add contacts (no need for _index)
    void addContact (void);
    void displayPhoneBook(void) const;
};

#endif
