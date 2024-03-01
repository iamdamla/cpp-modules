/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:04:21 by derblang          #+#    #+#             */
/*   Updated: 2023/10/31 10:47:41 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name): name(name)
{
    std::cout << this->name << " has bacame a Zombie!" << std::endl; 
}

Zombie::~Zombie()
{
    std::cout << this->name << " has been shot from the head!" << std::endl; 
}

std::string Zombie::getName(void) const
{
    return (this->name);
}
void Zombie::announce(void)
{
    std::cout << this->name <<" : BraiiiiiinnnnzzzZ..." << std::endl;
}