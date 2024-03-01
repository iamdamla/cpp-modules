/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:38:46 by derblang          #+#    #+#             */
/*   Updated: 2023/11/08 11:34:22 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete i;
    delete j;

    std::cout << std::endl;
    
    Animal *arr[2];
    for(int i = 0; i < 1; i++)
    {
        arr[i] = new Dog();
        std::cout << arr[i]->getType() << " : ";
        arr[i]->makeSound();
        std::cout << std::endl;
    }    
    for(int i = 1; i < 2; i++)
    {
        arr[i] = new Cat();
        std::cout << arr[i]->getType() << " : ";
        arr[i]->makeSound();
        std::cout << std::endl;
    }   
    for(int i = 0; i < 2; i++)
    {
        delete arr[i];
        std::cout << std::endl;
    }    
    
    Dog dog1;
    Dog dog2;
    dog2 = dog1;
    
    std::cout << dog1.getType() << std::endl;
    std::cout << dog2.getType() << std::endl;

    std::cout << std::endl;

    return (0);
}