/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:05:36 by derblang          #+#    #+#             */
/*   Updated: 2023/10/31 10:44:27 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"
#include "HumanA.hpp"

int main()
{
    {
        Weapon club = Weapon("kunai");
        HumanA ryu("Ryu", club);
        ryu.attack();
        club.setType("nunchuck");
        ryu.attack();
        
    }
    {
        Weapon club = Weapon("katana");
        HumanB miyuki("Miyuki");
        miyuki.setWeapon(club);
        miyuki.attack();
        club.setType("shuriken");
        miyuki.attack();
        std::cout << "\033[1;33m";
        std::cout << "I am the best ninja on the world, Ha ha ha! "<< std::endl;
   
    }
    return 0;
}
    