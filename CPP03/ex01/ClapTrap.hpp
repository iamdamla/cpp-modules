/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:54:25 by derblang          #+#    #+#             */
/*   Updated: 2023/11/06 10:54:27 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP


#include <iostream>
#include <string>

class ClapTrap
{
    protected:
        std::string _name;
        int _hitPoints;
        int _energyPoints;
        int _attackDamage;

    public:
        ClapTrap( void );
        ClapTrap(std::string name);
        ClapTrap( ClapTrap const& other);
        ClapTrap &operator=(ClapTrap const &other);
        ~ClapTrap( void );
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        std::string getName(void) const;
        int getHitPoints(void);
        int getEnergyPoints(void);
        int getAttackDamage(void);
};

#endif
