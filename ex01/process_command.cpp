/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_command.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akretov <akretov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 17:03:33 by akretov           #+#    #+#             */
/*   Updated: 2025/01/08 18:43:09 by akretov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.hpp"
#include "Contact.hpp"

// Initial promt
void display_prompt() {
    std::cout << "Enter your command: ADD, SEARCH or EXIT\n";
}

// Process user's input
// int process_command(const std::string& user_input) {
//     std::string user_input;
//     std::getline(std::cin, user_input);
    
//     if (strncmp(user_input.c_str(), "ADD", 3) == 0)
//         // ADD Statement
//     else if (strncmp(user_input.c_str(), "SEARCH", 6))
//         // Search
//     else if (strncmp(user_input.c_str(), "EXIT", 4) == 0)
//         return -1;
//     else
//         std::cerr << "Incorrect command\n";
// }
