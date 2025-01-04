/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akretov <akretov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 16:19:50 by akretov           #+#    #+#             */
/*   Updated: 2025/01/04 16:48:35 by akretov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int argc, char *argv[]) {
    if (argc == 2) {
        for (int i = 0; argv[1][i]; ++i)
            std::cout << (char)std::toupper(argv[1][i]);
        std::cout << std::endl;  
    } else {
       std:: cout << "There should be only 1 argument" << std::endl;
    }
    return 0;
}