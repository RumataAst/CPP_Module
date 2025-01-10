/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akretov <akretov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 16:21:55 by akretov           #+#    #+#             */
/*   Updated: 2025/01/10 17:21:09 by akretov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.hpp"

int main() {
    PhoneBook   phoneBook;

    do {
        display_prompt();
        if (process_command(phoneBook) != 0)
            return -1;
    } while (1);

    return 0;
}