/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akretov <akretov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 16:22:04 by akretov           #+#    #+#             */
/*   Updated: 2025/01/03 17:48:29 by akretov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <map>
#include <string>
#include <limits>
#include <cstdlib>

// process_command
void                        process_command(const std::string& user_input);
std::map<std::string, int>  create_command_map();

//process_input
void                        display_prompt();
std::string                 get_user_input();