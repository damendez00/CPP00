/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 22:48:33 by damendez          #+#    #+#             */
/*   Updated: 2024/06/13 17:09:45 by damendez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include "Agenda.h"

class PhoneBook
{
    private:
        unsigned int    i;
        unsigned int    contacts_flag;
        std::string     fill_info(std::string str);
        std::string     get_number(void);
    public:
        PhoneBook();
        ~PhoneBook();
        void            add_contact(Contact contact);
        void            search_contact(Contact contact);
        void            print_header(void);
        Contact         _contact[8];
};

#endif