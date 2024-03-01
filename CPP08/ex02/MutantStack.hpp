/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 10:36:20 by derblang          #+#    #+#             */
/*   Updated: 2024/02/26 10:53:12 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>


template<typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
    public:
    MutantStack(){};
    MutantStack(const MutantStack &other){*this = other;}
    MutantStack &operator=(const MutantStack &other)
    {
        if(this != &other)
            return (*this);
        return (*this);
    }
    ~MutantStack(){};
    typedef typename std::stack<T, Container>::container_type::iterator iterator;
    iterator begin(){return (this->c.begin());}
    iterator end(){return (this->c.end());}
};

#endif
