/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 19:25:25 by damendez          #+#    #+#             */
/*   Updated: 2024/07/13 12:05:04 by damendez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iomanip>  // manage input/output formatting
#include <iostream>
#include <limits>
#include <sstream> // stringstream
#include <cctype>  // For std::isspace

class Contact
{
    private:
        std::string     _firstName;
        std::string     _lastName;
        std::string     _nickname;
        std::string     _phoneNumber;
        std::string     _darkestSecret;
        int             _index;

        std::string _printStr(std::string) const;
        std::string _getInput(std::string) const;
        std::string _getNumber(std::string) const;
        
    public:
        Contact();
        ~Contact();
        void    init(void);
        void    view(int index) const;
        void    display(int index) const;
        void    setIndex(int i);
};

bool isEmptyOrWhitespace(const std::string& str);

#endif