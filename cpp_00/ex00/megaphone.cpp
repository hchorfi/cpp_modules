/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchorfi <hchorfi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 15:59:05 by hchorfi           #+#    #+#             */
/*   Updated: 2021/06/25 16:48:22 by hchorfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    int i = 1;
    int j;

    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    while (i < argc)
    {
        j = 0;
        while (argv[i][j])
        {
            std::cout << (char)toupper(argv[i][j]);
            j++;
        }
        std::cout << " ";
        i++;
    }
    std::cout << "\n";
    return 0;
}
