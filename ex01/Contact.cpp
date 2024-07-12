/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 19:04:43 by damendez          #+#    #+#             */
/*   Updated: 2024/07/12 13:15:44 by damendez         ###   ########.fr       */
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
    std::cout << "|" << std::endl;
}

void    Contact::display(int index) const {
    if (this->_firstName.empty() || this->_lastName.empty() || this->_nickname.empty())
    {
        std::cout << "Phonebook index #"<< index << " has no info yet." << std::endl;
        return ;
    }
    std::cout << std::endl;
    std::cout << "---->> CONTACT #" << index << " <<----" << std::endl;
    std::cout << "First Name:\t" << this->_firstName << std::endl;
    std::cout << "Last Name:\t" << this->_lastName << std::endl;
    std::cout << "Nickname:\t" << this->_nickname << std::endl;
    std::cout << "Phone Number:\t" << this->_phoneNumber << std::endl;
    std::cout << "Darkest Secret:\t" << this->_darkestSecret << std::endl;
    std::cout << std::endl;
}

std::string Contact::_getInput(std::string str) const {
    std::string input = "";
    bool        valid = false;
    do
    {
        if (std::cin.eof())
            break;
        std::cout << str << std::flush;
        std::getline(std::cin, input);
        if (std::cin.eof())
            break;
        // if (std::cin.good() && !input.empty())
        //     valid = true;
        // else {
        //     std::cin.clear();
        //     std::cout << "Invalid input; please try again." << std::endl;
        // }
        else if (std::cin.good() && !input.empty())
            valid = true;
    } while (!valid);
    return (input);
}

std::string Contact::_getNumber(std::string str) const {
    std::string input = "";
    bool        valid = false;
    size_t      i = 0;
    do
    {
        if (std::cin.eof())
            break;
        std::cout << str << std::flush;
        std::getline(std::cin, input);
        if (std::cin.eof())
            break;
        else if (std::cin.good() && !input.empty()){
            valid = true;
            while (i < input.length()) {
                if (!isdigit(input[i])) {
                    valid = false;
                    std::cout << "Invalid input; Please enter numbers only." << std::endl;
                    break;
                }
                ++i;
            }
        }
        else {
            std::cin.clear();
            std::cout << "Invalid input; Please try again." << std::endl;
        }
    } while (!valid);
    return (input);
}

void    Contact::init(void)
{
    //std::cin.ignore();
    this->_firstName = this->_getInput("Please enter a first name: ");
    this->_lastName = this->_getInput("Please enter last name: ");
    this->_nickname = this->_getInput("Please enter a nickname: ");
    this->_phoneNumber = this->_getNumber("Please enter a phone number: ");
    this->_darkestSecret = this->_getInput("Enter DaRkesT SecRet ;): ");
    std::cout << std::endl;
}

void    Contact::setIndex(int i)
{
    this->_index = i;
}