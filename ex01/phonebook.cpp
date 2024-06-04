/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 22:48:10 by damendez          #+#    #+#             */
/*   Updated: 2024/05/19 22:48:10 by damendez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void    PhoneBook::add_contact(Contact contact)
{
    contact.add_new(&_contact[i]);
    
    // There can only be 8 contacts
    if (i + 1 == 8)
        i = 0;
    else
        i++;
}