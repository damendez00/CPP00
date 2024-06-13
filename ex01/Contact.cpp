/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 19:04:43 by damendez          #+#    #+#             */
/*   Updated: 2024/06/13 16:39:36 by damendez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Agenda.h"

Contact::Contact()
{
}

Contact::~Contact()
{
}

void Contact::print_contacts(Contact *contact, unsigned int index)
{
    std::cout << std::right << std::setw(9) << index + 1 << "|";
    if (contact->first_name.size() > 10)
        std::cout << std::right << std::setw(9) << contact->first_name.substr(0, 9) << ". " << "|";
    else
        std::cout << std::right << std::setw(10) << contact->first_name << "|";
    if (contact->last_name.size() > 10)
        std::cout << std::right << std::setw(9) << contact->last_name.substr(0, 9) << ". " << "|";
    else
        std::cout << std::right << std::setw(10) << contact->last_name << "|";
    if (contact->nickname.size() > 10)
        std::cout << std::right << std::setw(9) << contact->nickname.substr(0, 9) << "." << "|";
    else
        std::cout << std::right << std::setw(10) << contact->nickname << std::endl << std::endl;
}

std::string get_number(void)
{
    std::string input;
    unsigned int j;  

    while (input.length() < 1)
    {
        input.erase();
        std::cout << std::setw(16) << "Phone Number:";
        if (!std::getline(std::cin, input))
            break;
        j = 0;
        while (j < input.length())
        {
            if (input[j] < '0' || input[j] > '9')
            {
                std::cout << "Phone number must only be numbers" << std::endl;
                input.erase();
            }
            j++;
        }
    }
    return (input);
}

std::string fill_info(std::string str)
{
    std::string input;

    while (input.length() < 1)
    {
        input.erase();
        std::cout << std::setw(16) << std::left << str;
        if (!std::getline(std::cin, input))
            break ;
    }
    return (input);
}

void    Contact::add_new(Contact *contact)
{
    contact->first_name = fill_info("First Name:");
    contact->last_name = fill_info("Last Name:");
    contact->nickname = fill_info("Nickname:");
    contact->phone_number = get_number();
    contact->darkest_secret = fill_info("Darkest Secret:");
}