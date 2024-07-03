/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 22:48:10 by damendez          #+#    #+#             */
/*   Updated: 2024/06/28 16:56:32 by damendez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

void    PhoneBook::printContacts(void) const
{
    std::cout << "------------- PHONBOOK CONTACTS -------------" << std::endl;
    for (size_t i = 0; i < 8; i++) {
        this->_contacts[i].view(i);
    }
    std::cout << std::endl;
}

int     PhoneBook::_readIndex() const {
    int     input = -1;
    bool    valid = false;
    do
    {
        std::cout << "Please enter the contact index: " << std::flush;
        std::cin >> input;
        if (std::cin.good() && (input >= 0 && input <= 8)) {
            valid = true;
        } else {
            //reset the buffer's state and empty
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            std::cout << "Invalid index; please re-enter." << std::endl;
        }
    } while (!valid);
    return (input);
}


void    PhoneBook::search(void)
{
    int  index;

    index = this->_readIndex();
    this->_contacts[index].display(index);
}

void    PhoneBook::addContact(void)
{
    static int  i; // i keeps its value between func calls

    this->_contacts[i % 8].init(); // this points to current instance of the methods class
    this->_contacts[i % 8].setIndex(i % 8); // set the index of current contact
    i++;
}