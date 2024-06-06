/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 22:48:10 by damendez          #+#    #+#             */
/*   Updated: 2024/06/06 18:34:14 by damendez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Agenda.h"

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

void    PhoneBook::add_contact(Contact contact)
{
    contact.add_new(&_contact[i]);
    
    // There can only be 8 contacts
    if (i + 1 == 8)
        i = 0;
    else
        i++;
}