/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akretov <akretov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 16:19:50 by akretov           #+#    #+#             */
/*   Updated: 2025/01/12 19:11:55 by akretov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int argc, char *argv[]) {
    if (argc > 2) {
        for (int j = 1; j < argc; j++) {
            for (int i = 0; argv[j][i]; ++i) {
                std::cout << (char)std::toupper(argv[j][i]);
            }
            std::cout << " ";
        }
        std::cout << std::endl;  
    } else {
       std:: cout << "There should be at least 1 argument" << std::endl;
    }
    return 0;
}