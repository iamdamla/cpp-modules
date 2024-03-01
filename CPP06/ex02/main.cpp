/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 10:52:39 by derblang          #+#    #+#             */
/*   Updated: 2024/02/14 12:52:48 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main(void)
{
    Base *base = Base::generate();
    Base::identify(base);
    Base::identify(*base);
    delete base;

    std::cout << std::endl;
   
    Base *base2 = Base::generate();
    Base::identify(base2);
    Base::identify(*base2);
    delete base2;

    std::cout << std::endl;

	Base *base3 = Base::generate();
    Base::identify(base3);
    Base::identify(*base3);
    delete base3;
}