/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akretov <akretov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 19:35:01 by akretov           #+#    #+#             */
/*   Updated: 2025/01/09 17:31:57 by akretov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     FUNCTIONS_HPP
# define    FUNCTIONS_HPP

#include <iostream>
#include <cstring>
#include <string>
#include <limits>
#include <cstdlib> 
#include <iomanip> 
#include "Contact.hpp"
#include "PhoneBook.hpp"

// utils.cpp
void    display_prompt (void);
int     process_command (PhoneBook& phoneBook);

#endif