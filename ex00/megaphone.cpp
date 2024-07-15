/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 10:20:27 by damendez          #+#    #+#             */
/*   Updated: 2024/07/15 14:42:05 by damendez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int main(int argc, char **argv)
{
    int     i;
    size_t  j;

    if (argc > 1)
    {
        i = 0;
        while (argv[++i])
        {
            j = -1;
            while (++j < strlen(argv[i]))
                std::cout << (char)toupper(argv[i][j]);
        }
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout << std::endl;
    return (0);
}