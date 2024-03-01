/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:05:00 by derblang          #+#    #+#             */
/*   Updated: 2023/10/31 10:46:56 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP


#include <iostream>
#include <string>

class Zombie
{
    private:
        std::string name;
    public:
        //Zombie(std::string name);
        Zombie(void);
        ~Zombie(void);
        void setName(std::string name);
        void announce(void);
        Zombie*    zombieHorde( int N, std::string name );
};

#endif
