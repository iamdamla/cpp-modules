/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:04:45 by derblang          #+#    #+#             */
/*   Updated: 2023/10/31 10:46:50 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void): name("braineater")
{
    std::cout << this->name << " has bacame a Zombie!" << std::endl;
}
Zombie::~Zombie()
{
    std::cout << this->name << " has been shot from the head!" << std::endl; 
}


void Zombie::setName(std::string name)
{
    this->name = name;
}

void Zombie::announce(void)
{
    std::cout << this->name <<" : BraiiiiiinnnnzzzZ..." << std::endl;
}
