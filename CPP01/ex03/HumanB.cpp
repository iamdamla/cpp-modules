/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:33:24 by derblang          #+#    #+#             */
/*   Updated: 2023/10/31 10:25:28 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    _name = name;
    _weapon = NULL;
}

HumanB::~HumanB()
{
	
}
void HumanB::setWeapon(Weapon &weapon)
{
    _weapon = &weapon;
}



void HumanB::attack(void)
{
    if(_weapon != NULL)
    {
        std::cout << "\033[31m";
        std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
        std::cout << "\033[31m";
    }
    else
    {
        std::cout << _name << " doesn't have any weapon, can't attack!" << std::endl;
        return;
    }
   
}

