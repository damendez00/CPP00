/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 22:48:33 by damendez          #+#    #+#             */
/*   Updated: 2024/07/15 14:54:40 by damendez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact         _contacts[8];
        int             _readIndex(void) const;

    public:
        PhoneBook();
        ~PhoneBook();
        void            addContact(void);
        void            printContacts(void) const;
        void            search(void) const;
};

#endif