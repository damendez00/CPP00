/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 21:27:00 by damendez          #+#    #+#             */
/*   Updated: 2024/05/19 21:27:00 by damendez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"

/*
 * 1. Initialize input string and needed classes
 * 1. Get user input (start-up output and input error output)
 * 2. Call phonebook method based on input (ADD, SEARCH, EXIT)
*/
int main(void)
{
    std::string input;
    PhoneBook   phonebook;
    Contact     contact;

    std::cout << "Enter a command: 'ADD', 'SEARCH', 'EXIT'." <<std::endl;
    while (true)
    {
        std::cout << ">";
        if (!std::getline(std::cin, input))
            return (1);
        for (int i = 0; input[i]; i++)
            input[i] = std::toupper(input[i]);
        if (input == "ADD")
            phonebook.add_contact(contact);
        else if (input == "SEARCH")
            phonebook.search_contact(contact);
        else if (input == "EXIT")
        { 
            std::cout << "Exiting" << std::endl;
            return (0);
        }
        else
            std::cout << ERROR_MSG << std::endl;
    }
}