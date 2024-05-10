/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 10:20:27 by damendez          #+#    #+#             */
/*   Updated: 2024/05/10 10:20:27 by damendez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Megaphone -> write a program that behaves as follows:
 * 
 * $>./megaphone "shhhhh... I think the students are asleep..."
 * SHHHHH... I THINK THE STUDENTS ARE ASLEEP...
 * $>./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
 * DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF.
 * $>./megaphone
 * * LOUD AND UNBEARABLE FEEDBACK NOISE *
 * $>
*/

/*
 * 1. Check user input
 * 2. Use strlen() and toupper() for strings when theres correct input
*/

#include <iostream>

int main(int argc, char **argv)
{
    int i;
    int j;

    if (argc > 1)
    {
        i = -1;
        while (argv[++i])
        {
            j = -1;
            while (++j < std::strlen(argv[i]))
                std::cout << toupper(argv[i][j]);
        }
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout << std::endl;
    return (0);
}