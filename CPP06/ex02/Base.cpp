/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 10:36:23 by derblang          #+#    #+#             */
/*   Updated: 2024/02/14 12:51:37 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


Base::~Base(void){}


Base* Base::generate(void)
{
    std::srand(std::time(0));
    int random = std::rand() % 3;
    switch(random)
    {
        case 0:
            return(new A());
        case 1:
            return(new B());
        case 2:
            return(new C());
        default:
            throw std::exception();
    }
}


void Base::identify(Base* p)
{
    if(dynamic_cast<A *>(p))
        std::cout << "A" << std::endl;
    else if(dynamic_cast<B *>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C *>(p))
        std::cout << "C" << std::endl;
    else
        std::cout << "No identification!" << std::endl;
}

void Base::identify(Base& p)
{
    try{
        A &a = dynamic_cast<A &>(p);
        std::cout << "A" << std::endl;
        (void)a;
    }
    catch(std::exception &e){}
    try{
        B &b = dynamic_cast<B &>(p);
        std::cout << "B" << std::endl;
        (void)b;
    }
    catch(std::exception &e){}
    try{
        C &c = dynamic_cast<C &>(p);
        std::cout << "C" << std::endl;
        (void)c;
    }
    catch(std::exception &e){}
}