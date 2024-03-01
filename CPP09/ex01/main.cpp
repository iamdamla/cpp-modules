/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damlaerblang <damlaerblang@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 11:56:35 by derblang          #+#    #+#             */
/*   Updated: 2024/02/29 11:11:23 by damlaerblan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        RPN rpn;
        try {
            rpn.checkInput(argv[1]);
            rpn.calculate(argv);
        }catch(std::exception &e){
            std::cout << e.what()<< std::endl;
        }
    }
    else
        std::cout << "Wrong number of arguments" << std::endl;
    return 0;

}