/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 19:04:43 by damendez          #+#    #+#             */
/*   Updated: 2024/06/21 18:48:11 by damendez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

// void Contact::print_contacts(Contact *contact, unsigned int index)
// {
//     printf("index: %i\n", index);
//     std::cout << std::right << std::setw(9) << index + 1 << "|";
//     if (contact->first_name.size() > 10)
//         std::cout << std::left << std::setw(9) << contact->first_name.substr(0, 9) << ". " << "|";
//     else
//         std::cout << std::left << std::setw(10) << contact->first_name << "|";
//     if (contact->last_name.size() > 10)
//         std::cout << std::left << std::setw(9) << contact->last_name.substr(0, 9) << ". " << "|";
//     else
//         std::cout << std::left << std::setw(10) << contact->last_name << "|";
//     if (contact->nickname.size() > 10)
//         std::cout << std::left << std::setw(9) << contact->nickname.substr(0, 9) << "." << "|";
//     else
//         std::cout << std::left << std::setw(10) << contact->nickname << std::endl << std::endl;
// }

// void Contact::print_select(Contact *contact)
// {
//     std::cout << std::endl << ">> Contact information << " << std::endl << std::endl;
// 	std::cout << "- First name: " << contact->first_name << std::endl;
// 	std::cout << "- Last name: " << contact->last_name << std::endl;
// 	std::cout << "- Nickname: " << contact->nickname << std::endl;
// 	std::cout << "- Phone number: " << contact->phone_number << std::endl;
// 	std::cout << "- Darkest secret: " << contact->darkest_secret << std::endl << std::endl;
// }

// int Contact::choose_index(unsigned int flag)
// {
//     std::string input;
//     unsigned int index;

//     // Ask user for index number
//     index = -1;
//     while (input.length() < 1)
//     {
//         input.erase();
// 		std::cout << "Which contact do you want to see? ";
//         if (!std::getline(std::cin, input))
//             break ;
//         // Check index number value
//         if (input.length() != 1)
//             std::cout << "Invalid index.1" << std::endl;
//         // change string to int
//         index = input[0] - '0' - 1;
//         // Index number cant be greater then number of contacts or less than 1
//         if (index > 7 || index > flag)
//             std::cout << "Invalid index." << std::endl;
//     }
//     return (index);
// }

// not const
std::string Contact::_getInput(std::string str)
{
    std::string     input = "";
    bool            valid = false;
    unsigned int    j = 0;

    do 
    {
        std::cout << str << std::flush;
        std::getline(std::cin, input);
        if (std::cin.good() && !input.empty())
        {
            valid = true;
            if (str.compare("Please enter a phone number: "))
            {
                while (j < input.length())
                {
                    if (input[j] < '0' || input[j] > '9')
                        valid = false;
                }
            }
        }
        if (valid == false)
        {
            std::cin.clear();
            std::cout << "Invalid input, please try again." << std::endl;
        }
    } while (!valid);
    return (input);
}

void    Contact::init(void)
{
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