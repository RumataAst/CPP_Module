/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akretov <akretov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 16:19:50 by akretov           #+#    #+#             */
/*   Updated: 2025/01/02 17:17:06 by akretov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int argc, char *argv[]) {
    using std::cout;

    if (argc == 2) {
        for (int i = 0; argv[1][i]; ++i)
            cout << (char)std::toupper(argv[1][i]);
        cout << std::endl;  
    } else {
        cout << "There should be only 1 argument" << std::endl;
    }
    return 0;
}