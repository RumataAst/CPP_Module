/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akretov <akretov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 19:35:01 by akretov           #+#    #+#             */
/*   Updated: 2025/01/04 19:36:35 by akretov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     FUNCTIONS_HPP
# define    FUNCTIONS_HPP

#include <iostream>
#include <map>
#include <string>
#include <limits>
#include <cstdlib>  
#include "PhoneBook.hpp"

// process_command
void                        process_command(const std::string& user_input);
std::map<std::string, int>  create_command_map();

//process_input
void                        display_prompt();
std::string                 get_user_input();

#endif