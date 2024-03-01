/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:54:31 by derblang          #+#    #+#             */
/*   Updated: 2023/11/06 10:54:33 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main()
{
    ScavTrap ninja("Ryu");
    ninja.attack("Kawabata");
    ninja.takeDamage(5);
    ninja.beRepaired(10);

    std::cout << std::endl;

    ScavTrap samurai("Hattori");
    samurai.attack("Akira");
    samurai.takeDamage(3);
    samurai.beRepaired(4);
    samurai.guardGate();



    return 0;
}


