/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:38:46 by derblang          #+#    #+#             */
/*   Updated: 2023/11/08 11:16:50 by derblang         ###   ########.fr       */
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
    
     Animal *arr[10];
    for(int i = 0; i < 5; i++)
    {
        arr[i] = new Dog();
        std::cout << arr[i]->getType() << " : ";
        arr[i]->makeSound();
        std::cout << std::endl;
    }    
    for(int i = 5; i < 10; i++)
    {
        arr[i] = new Cat();
        std::cout << arr[i]->getType() << " : ";
        arr[i]->makeSound();
        std::cout << std::endl;
    }   
    for(int i = 0; i < 10; i++)
    {
        delete arr[i];
        std::cout << std::endl;
    }  



    return (0);
}