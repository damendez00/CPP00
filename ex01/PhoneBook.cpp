/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 22:48:10 by damendez          #+#    #+#             */
/*   Updated: 2024/07/13 12:11:46 by damendez         ###   ########.fr       */
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

int PhoneBook::_readIndex() const {
    std::string input;
    int index = -1;
    bool valid = false;
    int     i = -1;

    do {
        std::cout << "Please enter the contact index (0-7): " << std::flush;
        // Handle EOF or empty input
        if (!std::getline(std::cin, input) || input.empty()) {
            if (std::cin.eof()) {
                break;
            }
            std::cout << "Invalid index; please re-enter." << std::endl;
            continue;
        }
        
        // Check if the input is a number and within the valid range
        bool isNumber = true;
        while (input[++i] != '\0') {
            if (!std::isdigit(input[i])) {
                isNumber = false;
                break;
            }
        }
        i = -1;

        if (isNumber && !isEmptyOrWhitespace(input)) {
            std::stringstream strToNum;
            strToNum << input;
            strToNum >> index;
            if (index >= 0 && index <= 7) {
                valid = true;
            } else {
                std::cout << "Invalid index; please re-enter." << std::endl;
            }
        } else {
            std::cout << "Invalid index; please re-enter." << std::endl;
        }
        
    } while (!valid);

    return index;
}

void    PhoneBook::search(void) const
{
    int  index;

    index = this->_readIndex();
    if (index != -1)
        this->_contacts[index].display(index);
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