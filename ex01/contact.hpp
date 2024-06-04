/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 19:25:25 by damendez          #+#    #+#             */
/*   Updated: 2024/06/04 19:25:25 by damendez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include "Agenda.h"

class Contact
{
    private:
        std::string     first_name;
        std::string     last_name;
        std::string     nickname;
        std::string     phone_number;
        std::string     darkest_secret;
        
    public:
        Contact();
        ~Contact();
        void            add_new(Contact *contact);
        void            print_contact(Contact *contact);
        void            print_all(Contact *contact);
};

#endif