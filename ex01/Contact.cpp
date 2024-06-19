/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 19:04:43 by damendez          #+#    #+#             */
/*   Updated: 2024/06/19 16:58:09 by damendez         ###   ########.fr       */
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
    printf("index: %i\n", index);
    std::cout << std::right << std::setw(9) << index + 1 << "|";
    if (contact->first_name.size() > 10)
        std::cout << std::left << std::setw(9) << contact->first_name.substr(0, 9) << ". " << "|";
    else
        std::cout << std::left << std::setw(10) << contact->first_name << "|";
    if (contact->last_name.size() > 10)
        std::cout << std::left << std::setw(9) << contact->last_name.substr(0, 9) << ". " << "|";
    else
        std::cout << std::left << std::setw(10) << contact->last_name << "|";
    if (contact->nickname.size() > 10)
        std::cout << std::left << std::setw(9) << contact->nickname.substr(0, 9) << "." << "|";
    else
        std::cout << std::left << std::setw(10) << contact->nickname << std::endl << std::endl;
}

void Contact::print_select(Contact *contact)
{
    std::cout << std::endl << ">> Contact information << " << std::endl << std::endl;
	std::cout << "- First name: " << contact->first_name << std::endl;
	std::cout << "- Last name: " << contact->last_name << std::endl;
	std::cout << "- Nickname: " << contact->nickname << std::endl;
	std::cout << "- Phone number: " << contact->phone_number << std::endl;
	std::cout << "- Darkest secret: " << contact->darkest_secret << std::endl << std::endl;
}

int Contact::choose_index(unsigned int flag)
{
    std::string input;
    unsigned int index;

    // Ask user for index number
    index = -1;
    while (input.length() < 1)
    {
        input.erase();
		std::cout << "Which contact do you want to see? ";
        if (!std::getline(std::cin, input))
            break ;
        // Check index number value
        if (input.length() != 1)
            std::cout << "Invalid index.1" << std::endl;
        // change string to int
        index = input[0] - '0' - 1;
        // Index number cant be greater then number of contacts or less than 1
        if (index > 7 || index > flag)
            std::cout << "Invalid index." << std::endl;
    }
    return (index);
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

void print_input(const std::string& input)
{
    printf("contact->first_name %s\n", input.c_str());
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
    //print_input(input);
    return (input);
}

void    Contact::add_new(Contact *contact)
{
    contact->first_name = fill_info("First Name:");
    print_input(contact->first_name);
    contact->last_name = fill_info("Last Name:");
    contact->nickname = fill_info("Nickname:");
    contact->phone_number = get_number();
    contact->darkest_secret = fill_info("Darkest Secret:");
}