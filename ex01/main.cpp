/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 21:27:00 by damendez          #+#    #+#             */
/*   Updated: 2024/06/21 17:12:59 by damendez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
    std::string input = "";
    PhoneBook   phoneBook;

    std::cout << "Enter a command: 'ADD', 'SEARCH', 'EXIT'." << std::endl;
    // while the input string isnot EXIT (.compare), check for ADD or SEARCH
    while (input.compare("EXIT") != 0)
    {
        if (input.compare("ADD") == 0)
            phoneBook.addContact();
        else if (input.compare("SEARCH") == 0)
        {
            phoneBook.printContacts();
            phoneBook.search();
        }
        else
            std::cout << input << " is an invalid command." << std::endl;
        std::cout << ">" << std::flush;
        std::cin >> input;
    }
    return (0);
}