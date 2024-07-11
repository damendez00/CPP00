/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 22:48:33 by damendez          #+#    #+#             */
/*   Updated: 2024/07/03 16:31:31 by damendez         ###   ########.fr       */
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
        int             contactsNum;

    public:
        PhoneBook();
        ~PhoneBook();
        void            addContact(void);
        void            printContacts(void) const;
        void            search(void) const;
};

#endif