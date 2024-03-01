/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:04:02 by derblang          #+#    #+#             */
/*   Updated: 2023/10/31 10:47:21 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *nom;
    Zombie zombie1("MJ");

    nom = newZombie("Zombie1");
    randomChump("Zombie2");
    std::cout << nom->getName() << " : Hello world!" <<std::endl;
    nom->announce();
    delete nom;
    return 0;
}