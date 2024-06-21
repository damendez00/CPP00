/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 22:48:10 by damendez          #+#    #+#             */
/*   Updated: 2024/06/21 19:29:13 by damendez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

// void    PhoneBook::print_header(void)
// {
//     std::cout << "      >> CHOOSE CONTACT <<       " << std::endl << std::endl;
//     std::cout << std::right << std::setw(10) << "Index|";
//     std::cout << std::right << std::setw(10) << " First Name|";
//     std::cout << std::right << std::setw(10) << " Last Name|";
//     std::cout << std::right << std::setw(10) << " Nickname " << std::endl;
// }

void    PhoneBook::addContact(void)
{
    static int  i; // i keeps its value between func calls

    this->_contacts[i % 8].init(); // this points to current instance of the methods class
    this->_contacts[i % 8].setIndex(i % 8); // set the index of current contact
    i++;
}