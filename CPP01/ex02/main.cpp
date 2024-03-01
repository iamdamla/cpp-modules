/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:05:16 by derblang          #+#    #+#             */
/*   Updated: 2023/10/19 11:05:18 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>

int main()
{
    std::string str = "this is brain speaking!";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "Memory address of str:        " << &str<< std::endl;
    std::cout << "Memory address of stringPTR:  " << stringPTR << std::endl;
    std::cout << "Memory address of stringREF:  " << &stringREF << std::endl;

    std::cout << "Value of str:                 " << str << std::endl;
    std::cout << "Value of stringPTR:           " << *stringPTR << std::endl;
    std::cout << "Value of stringREF:           " << stringREF << std::endl;






}
