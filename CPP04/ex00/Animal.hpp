/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:47:41 by derblang          #+#    #+#             */
/*   Updated: 2023/11/08 10:45:32 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
    protected:
        std::string _type;
    
    public:
        Animal( void );
        Animal(std::string type);
        Animal(const Animal &other);
        virtual ~Animal(void);
        Animal &operator=(const Animal &other);
        std::string getType(void) const;
        virtual void makeSound(void) const;
};

#endif