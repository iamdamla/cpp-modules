/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:21:26 by derblang          #+#    #+#             */
/*   Updated: 2023/11/08 11:21:28 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
    public:
        Animal( void );
        Animal(std::string type);
        Animal(const Animal &other);
        virtual ~Animal(void);
        Animal& operator=(const Animal &other);
        virtual void makeSound(void) const = 0;
        std::string getType(void) const;

    protected:
        std::string _type;
};


#endif