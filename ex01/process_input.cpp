/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_input.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akretov <akretov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 17:46:14 by akretov           #+#    #+#             */
/*   Updated: 2025/01/03 17:47:12 by akretov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

// Initial promt
void display_prompt() {
    std::cout << "Enter your command: ADD, SEARCH or EXIT\n";
}

// Function to get and validate user input
std::string get_user_input() {
    std::string user_input;
    std::getline(std::cin, user_input);
    
    if (user_input.length() > 7) {
        std::cerr << "The options were ADD, SEARCH or EXIT.\n";
        return "";
    }
    
    return user_input;
}