/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:53:43 by derblang          #+#    #+#             */
/*   Updated: 2023/11/06 10:53:45 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int main()
{
    ClapTrap ninja("Ryu");
    ClapTrap samurai("Kawabata");
    ninja.attack("Kawabata");
    ninja.takeDamage(9);
    ninja.beRepaired(12);

    samurai.attack("Ryu");
    samurai.takeDamage(8);
    samurai.beRepaired(12);

    return 0;
}


