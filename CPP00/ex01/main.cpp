/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:04:15 by derblang          #+#    #+#             */
/*   Updated: 2023/10/12 13:59:16 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"



int main(int argc, char **argv)
{
    PhoneBook pb;
    Contact contact;
  
    std::string str;
    (void)argv;
  

    if(argc != 1)
        return 0;
    else
    {
        pb.startPage();
        while(1)
        {
            std::getline(std::cin, str);
            if(std::cin.eof())
                break;
            if(str == "ADD")
                pb.addContact();
            else if(str == "SEARCH")
                pb.searchContact();
            else if(str == "EXIT")
                break ;
            else
                std::cout << "This is not an instruction. Choose one of them: ADD - SEARCH - EXIT" << std::endl;
        }
    }
  
    return 0;
}