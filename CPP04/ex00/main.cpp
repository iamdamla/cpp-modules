/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:38:46 by derblang          #+#    #+#             */
/*   Updated: 2023/11/08 10:47:59 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"



int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
 
    std::cout << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
   
    std::cout << std::endl;

    i->makeSound(); 
    j->makeSound();
    meta->makeSound();

    std::cout << std::endl;

 
    delete meta;
    delete i;
    delete j;

    std::cout << std::endl;


    const WrongAnimal* k = new WrongAnimal();
    const WrongAnimal* m = new WrongCat();
    std::cout << std::endl;
    

    std::cout << k->getType() << " " << std::endl;
    std::cout << m->getType() << " " << std::endl;
    std::cout << std::endl;

    
    k->makeSound();
    m->makeSound();
    std::cout << std::endl;


    delete k;
    delete m;

    return (0);
}