/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 13:27:35 by derblang          #+#    #+#             */
/*   Updated: 2024/02/26 10:59:08 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"



int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "Top of the mstack->" << mstack.top() << std::endl;
    mstack.pop();

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    std::cout <<  "mstack size-> " << mstack.size() << std::endl;

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    s.push(2);
    s.push(18);
    s.push(9);
    s.pop();
    std::cout << "top of the s stack-> " << s.top() << std::endl;
    std::cout <<  "s stack size-> " << s.size() << std::endl;
    
    return 0;
}
