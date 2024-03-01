/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:38:14 by derblang          #+#    #+#             */
/*   Updated: 2023/10/31 10:40:27 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    Harl harl;
    if(ac != 2)
    {
        std::cout << "Invalid number of arguments!" << std::endl;
        return 0;
    }
    harl.complain(av[1]);
    return 0;
}