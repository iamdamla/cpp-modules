/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 10:30:47 by damlaerblan       #+#    #+#             */
/*   Updated: 2024/02/21 12:45:33 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "whatever.hpp"
int main( void ) 
{
    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "After swap " << std::endl;
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

    std::cout << std::endl; 
    
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "After swap " << std::endl;
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

    std::cout << std::endl; 


    char e = 'e';
    char f = 'f';
    ::swap(e, f);
    std::cout << "After swap " << std::endl;
    std::cout << "e = " << e << ", f = " << f << std::endl;
    std::cout << "min( e, f ) = " << ::min( e, f ) << std::endl;
    std::cout << "max( e, f ) = " << ::max( e, f ) << std::endl;

    std::cout << std::endl; 

    float g = 12.6f;
    float h = 12.6f;
    ::swap(g, h);
    std::cout << "After swap " << std::endl;
    std::cout << "g = " << g << ", h = " << h << std::endl;
    std::cout << "min( g, h ) = " << ::min( g, h ) << std::endl;
    std::cout << "max( g, h ) = " << ::max( g, h ) << std::endl;
    
    
    return 0;
}