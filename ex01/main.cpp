/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akretov <akretov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 16:21:55 by akretov           #+#    #+#             */
/*   Updated: 2025/01/03 17:33:13 by akretov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main() {
    std::string user_input;

    do {
        display_prompt();
        user_input = get_user_input();

        if (user_input.empty()) {
            continue;
        }

        process_command(user_input);

    } while (1);

    return 0;
}