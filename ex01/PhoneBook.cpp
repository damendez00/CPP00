/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 22:48:10 by damendez          #+#    #+#             */
/*   Updated: 2024/06/13 17:18:25 by damendez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Agenda.h"

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

void    PhoneBook::print_header(void)
{
    std::cout << "      >> CHOOSE CONTACT <<       " << std::endl << std::endl;
    std::cout << std::right << std::setw(10) << "Index|";
    std::cout << std::right << std::setw(10) << " First Name|";
    std::cout << std::right << std::setw(10) << " Last Name|";
    std::cout << std::right << std::setw(10) << " Nickname " << std::endl;
}

void    PhoneBook::search_contact(Contact contact)
{
    unsigned int j;
    unsigned int index;
    std::string input;

    // If no contacts make outpt msg (use i array counter)
    if (i == 0 && contacts_flag == 0)
    {
        std::cout << " No contacts yet " << std::endl;
        return ;
    }
    else
    {
        j = 0;
        while (j < contacts_flag)
        {
            if (j == 0)
                print_header();
            contact.print_contacts(&_contact[i], j);
            j++;
        }
        index = contact.choose_index(flag); // TO-DO
        contact.print_select(&_contact[index - 1]); // TO-DO
    }
}

void    PhoneBook::add_contact(Contact contact)
{
    contact.add_new(&_contact[i]);
    
    // There can only be 8 contacts
    if (i + 1 == 8)
    {
        i = 0;
        contacts_flag = 8;
    }
    else
    {
        i++;
        if (contacts_flag != 8)
            contacts_flag++;
    }
}