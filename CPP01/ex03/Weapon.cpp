/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:20:25 by derblang          #+#    #+#             */
/*   Updated: 2023/10/31 10:24:31 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
    
}

std::string const& Weapon::getType(void) const
{
    return (this->_type);
}

void Weapon::setType(std::string newType)
{
    this->_type = newType;
}