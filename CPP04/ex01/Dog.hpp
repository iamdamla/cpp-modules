/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:19:39 by derblang          #+#    #+#             */
/*   Updated: 2023/11/07 14:34:21 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Brain;

class Dog : public Animal
{
    public:
        Dog(void);
        Dog(const Dog &other);
        Dog &operator=(const Dog &other);
        ~Dog(void); 
        virtual void makeSound(void) const;
        void setBrain(Brain const &brain);
        Brain& getBrain(void) const;
        
    private:
        Brain *_brain;
};

#endif