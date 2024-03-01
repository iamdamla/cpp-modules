/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:00:46 by derblang          #+#    #+#             */
/*   Updated: 2023/11/08 11:17:35 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>


class Brain
{
    public:
        Brain(void);
        Brain(const Brain &other);
        Brain& operator=(const Brain &other);
        ~Brain(void);
        void setIdea(std::string idea);
        std::string *getIdea(void);
    
    protected:
        std::string _ideas[100];
};

#endif