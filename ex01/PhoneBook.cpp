/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 22:48:10 by damendez          #+#    #+#             */
/*   Updated: 2024/07/12 13:12:09 by damendez         ###   ########.fr       */
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
            if (std::cin.eof())
                break;
            else if (std::cin.good() && !input.empty() && (input >= 0 && input <= 7)) {
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

void    PhoneBook::search(void) const
{
    int  index;

    index = this->_readIndex();
    if (index != -1)
        this->_contacts[index].display(index);
    std::cout << "HEY!" << std::endl;
        // Handle remaining input after reading the index to prevent leftover newline issues
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void    PhoneBook::addContact(void)
{
    static int  i;

    this->_contacts[i % 8].init();
    this->_contacts[i % 8].setIndex(i % 8);
    i++;
}