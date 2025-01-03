/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_command.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akretov <akretov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 17:03:33 by akretov           #+#    #+#             */
/*   Updated: 2025/01/03 17:50:34 by akretov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

// Assign numbers for switch
std::map<std::string, int> create_command_map() {
    std::map<std::string, int> command_map;
    command_map["ADD"] = 1;
    command_map["SEARCH"] = 2;
    command_map["EXIT"] = 3;
    return command_map;
}

// Process user's input
void process_command(const std::string& user_input) {
    std::map<std::string, int> command_map = create_command_map();
    
    if (command_map.find(user_input) != command_map.end()) {
        int command = command_map[user_input];
        switch (command) {
            case 1:
                std::cout << "case 1: ADD\n";
                break;
            case 2:
                std::cout << "case 2: SEARCH\n";
                break;
            case 3:
                exit (1);
                break;
            default:
                std::cout << "Invalid command. Please re-try\n";
        }
    } else {
        std::cout << "Invalid input.\n";
    }
}