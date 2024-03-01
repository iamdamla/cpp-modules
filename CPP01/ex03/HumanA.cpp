/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:24:36 by derblang          #+#    #+#             */
/*   Updated: 2023/10/18 16:12:38 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
    
}

void HumanA::attack(void)
{
    std::cout << "\033[1;35m";
    std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
    std::cout << "\033[1;35m";
}

     