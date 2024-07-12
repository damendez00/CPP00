/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 21:27:00 by damendez          #+#    #+#             */
/*   Updated: 2024/07/12 13:03:31 by damendez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
    std::string input = "";
    PhoneBook   phoneBook;
    
    std::cout << "Enter a command: 'ADD', 'SEARCH', 'EXIT'." << std::endl;
    while (input.compare("EXIT") != 0)
    {
        std::cout << ">" << std::flush;
        if (!getline(std::cin, input))
            break;
        else if (input.compare("ADD") == 0)
            phoneBook.addContact();
        else if (input.compare("SEARCH") == 0)
        {
            phoneBook.printContacts();
            phoneBook.search();
        }
        else if (input.compare("EXIT") != 0 && input.length() > 0)
            std::cout << input << " is an invalid command." << std::endl;
    }
    return (0);
}