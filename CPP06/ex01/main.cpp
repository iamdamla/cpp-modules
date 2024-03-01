/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 17:19:48 by damlaerblan       #+#    #+#             */
/*   Updated: 2024/02/14 12:56:17 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{
    Data *ptr = new Data;
    ptr->data = "Helloo";
   

    std::cout << "Before " << std::endl;
    std::cout << "Data string: " << ptr->data << std::endl;
    std::cout << "Data address: " << &ptr << std::endl;

    std::cout << std::endl;

    uintptr_t raw = Serializer::serialize(ptr);
    std::cout << "After Serialization" << std::endl;
     std::cout << "Data raw: " << raw << std::endl;
     std::cout << "Data address: " << &ptr << std::endl;

    std::cout << std::endl;

    Serializer::deserialize(raw);
    std::cout << "After Deserialization" << std::endl;
    std::cout << "Data string:  " << ptr->data << std::endl;
    std::cout << "Data address:  " << &ptr << std::endl;

    
}