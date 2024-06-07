/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 19:04:43 by damendez          #+#    #+#             */
/*   Updated: 2024/06/07 18:17:37 by damendez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Agenda.h"

Contact::Contact()
{
}

Contact::~Contact()
{
}

std::string get_number(void)
{
    std::string input;
    unsigned int j;  

    while (input.length() < 1)
    {
        // give output str
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