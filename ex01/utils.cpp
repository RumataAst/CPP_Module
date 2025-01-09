/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akretov <akretov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 17:46:14 by akretov           #+#    #+#             */
/*   Updated: 2025/01/09 17:57:05 by akretov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.hpp"

// Initial promt
void display_prompt() {
    std::cout << "Enter your command: ADD, SEARCH or EXIT\n";
}

// Process user's input
int process_command (PhoneBook& phoneBook) {
    std::string user_input;
    std::getline(std::cin, user_input);

    if (user_input == "ADD") {
        phoneBook.addContact();
    } else if (user_input == "SEARCH") {
        phoneBook.displayPhoneBook();
    } else if (user_input == "EXIT") {
        return -1;
    } else {
        std::cerr << "Incorrect command\n";
    }
    return 0;
}
