/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:05:05 by derblang          #+#    #+#             */
/*   Updated: 2023/10/31 10:46:36 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

 Zombie*    Zombie::zombieHorde( int N, std::string name )
 {
    unsigned int i = 0;
    Zombie *arr = new Zombie[N];
    while(i < (unsigned int)N)
        arr[i++].setName(name);
    return arr;
 }