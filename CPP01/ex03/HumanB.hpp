/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:12:27 by derblang          #+#    #+#             */
/*   Updated: 2023/10/18 15:38:50 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HumanB_HPP
# define HumanB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
    private:
    Weapon *_weapon;
    std::string _name;

    public:
    HumanB(std::string name);
    ~HumanB();
    void attack(void);
    void setWeapon(Weapon &weapon);
};

#endif