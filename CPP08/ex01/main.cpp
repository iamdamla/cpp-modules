/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 13:07:25 by derblang          #+#    #+#             */
/*   Updated: 2024/02/26 11:02:44 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    try{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    sp.print();
    std::cout << "shortest span is: " << sp.shortestSpan() << std::endl;
    std::cout << "longest span is: " << sp.longestSpan() << std::endl;

    std::cout << std::endl;

    Span sp2 = Span(10000);
    for(int i = 0; i < 10000; i++)
    {
    int randomNumber = std::rand() % 10000;
    sp2.addNumber(randomNumber);
    }
    //sp2.print();
    std::cout << "shortest span is: " << sp2.shortestSpan() << std::endl;
    std::cout << "longest span is: " << sp2.longestSpan() << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }

}