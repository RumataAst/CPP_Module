/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akretov <akretov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 16:21:55 by akretov           #+#    #+#             */
/*   Updated: 2025/01/08 19:02:20 by akretov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.hpp"


int main(void) {
    // Create a PhoneBook instance
    PhoneBook phonebook;

    // Add some contacts
    Contact contact1("John", "Doe", "JDoe", "Afraid of spiders", "123-456-7890");
    Contact contact2("Jane", "Smith", "JSmith", "Loves coding", "987-654-3210");
    Contact contact3("I", "Doe", "JDoe", "Afraid of spiders", "123-456-7890");
    Contact contact4("Dont", "Smith", "JSmith", "Loves coding", "987-654-3210");
    Contact contact5("Care", "Doe", "JDoe", "Afraid of spiders", "123-456-7890");
    Contact contact6("What", "Smith", "JSmith", "Loves coding", "987-654-3210");
    Contact contact7("names", "Smith", "JSmith", "Loves coding", "987-654-3210");
    Contact contact8("are", "Doe", "JDoe", "Afraid of spiders", "123-456-7890");
    Contact contact9("There", "Smith", "JSmith", "Loves coding", "987-654-3210");
    Contact contact10("!", "Smith", "JSmith", "Loves coding", "987-654-3210");

    phonebook.addContact(contact1);
    phonebook.addContact(contact2);
    phonebook.addContact(contact3);
    phonebook.addContact(contact4);
    phonebook.addContact(contact5);
    phonebook.addContact(contact6);
    phonebook.addContact(contact7);
    phonebook.addContact(contact8);
    phonebook.addContact(contact9);
    phonebook.addContact(contact10);

    // Display the phonebook
    phonebook.displayPhoneBook(10);  // Assuming 10 is the column width

    return 0;
}

// int main() {
//     std::string user_input;
//     PhoneBook   phoneBook;

//     do {
//         display_prompt();
//         if (process_command(user_input) != 1)
//             return process_command(user_input);
//     } while (1);

//     return 0;
// }