/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akretov <akretov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 19:35:01 by akretov           #+#    #+#             */
/*   Updated: 2025/01/12 16:16:20 by akretov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     FUNCTIONS_HPP
# define    FUNCTIONS_HPP

#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

// utils.cpp
void    display_prompt (void);
int     process_command (PhoneBook& phoneBook);

enum InputCheckResult {
    VALID_INPUT = 0,
    ONLY_SPACES = -1,
    TOO_LONG = -2,
    EMPTY_INPUT = -3
};


#endif