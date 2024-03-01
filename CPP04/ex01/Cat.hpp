/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:14:37 by derblang          #+#    #+#             */
/*   Updated: 2023/11/07 14:30:30 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Brain;

class Cat : public Animal
{
    public:
        Cat(void);
        Cat(const Cat &other);
        Cat &operator=(const Cat &other);
        ~Cat(void); 
        virtual void makeSound(void) const;
        void setBrain(Brain const &brain);
        Brain& getBrain(void) const;
    
    private:
        Brain *_brain;
};

#endif