/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 19:04:43 by damendez          #+#    #+#             */
/*   Updated: 2024/06/28 17:00:24 by damendez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

std::string Contact::_printStr(std::string str) const
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

void Contact::view(int index) const
{
    if (this->_firstName.empty())
        return ;
    std::cout << "|" << std::setw(10) << index << std::flush;
    std::cout << "|" << std::setw(10) << this->_printStr(this->_firstName) << std::flush;
    std::cout << "|" << std::setw(10) << this->_printStr(this->_lastName) << std::flush;
    std::cout << "|" << std::setw(10) << this->_printStr(this->_nickname) << std::flush;
    std::cout << "|" << std::setw(10) << this->_printStr(this->_phoneNumber) << std::flush;
    std::cout << "|" << std::setw(10) << this->_printStr(this->_darkestSecret) << std::flush;
    std::cout << "|" << std::endl;
}

std::string Contact::_getInput(std::string str) const {
    std::string input = "";
    bool        valid = false;
    do
    {
        std::cout << str << std::flush;
        std::getline(std::cin, input);
        if (std::cin.good() && !input.empty())
            valid = true;
        else {
            std::cin.clear();
            std::cout << "Invalid input; please try again." << std::endl;
        }
    } while (!valid);
    return (input);
}

void    Contact::init(void)
{
    std::cin.ignore();
    this->_firstName = this->_getInput("Please enter a first name: ");
    this->_lastName = this->_getInput("Please enter last name: ");
    this->_nickname = this->_getInput("Please enter a nickname: ");
    this->_phoneNumber = this->_getInput("Please enter a phone number: ");
    this->_darkestSecret = this->_getInput("Enter DaRkesT SecRet ;): ");
    std::cout << std::endl;
}

void    Contact::setIndex(int i)
{
    this->_index = i;
}