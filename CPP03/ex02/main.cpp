/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:55:35 by derblang          #+#    #+#             */
/*   Updated: 2023/11/06 10:55:37 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main()
{
    ScavTrap jack("Jack");
    FragTrap dave("Dave");

    dave.attack("Jack");
    jack.takeDamage(80);
    jack.beRepaired(30);

    
    std::cout << std::endl;

    jack.attack("Dave");
    dave.takeDamage(40);
    dave.beRepaired(20);
    dave.highFivesGuys();

    return 0;

}