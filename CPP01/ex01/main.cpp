/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:04:38 by derblang          #+#    #+#             */
/*   Updated: 2023/10/31 10:46:17 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *horde = NULL;
    horde = horde->zombieHorde(4, "Zombie78");
    unsigned int i(0);

    while(i < 4)
    {
        horde[i].announce();
        i++;
    }
    delete[] horde;
    return 0;
}