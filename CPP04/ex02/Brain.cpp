/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:19:07 by derblang          #+#    #+#             */
/*   Updated: 2023/11/08 11:30:47 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "\e[0;34mBrain default constructor called\033[0m" << std::endl;
}

Brain::Brain(const Brain &other)
{
    *this = other;
    std::cout << "\e[0;34mBrain copy constructor called\033[0m" << std::endl;
}
Brain& Brain::operator=(const Brain &other)
{
    if(this == &other)
        return (*this);
    for(int i = 0; i < 100; i++)
        this->_ideas[i] = other._ideas[i];
    return (*this);
}
Brain::~Brain(void)
{
    std::cout << "\e[0;34mBrain can not compute, it will crush!!\033[0m" << std::endl;
}
void Brain::setIdea(std::string idea)
{
    int i = 0;
    this->_ideas[i] = idea;
}
std::string *Brain::getIdea(void)
{
    return (this->_ideas);
}
