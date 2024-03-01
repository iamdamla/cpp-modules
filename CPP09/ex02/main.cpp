/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 12:59:09 by damlaerblan       #+#    #+#             */
/*   Updated: 2024/03/01 09:47:56 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
    std::vector<unsigned int> vector;
    std::list<unsigned int> list;
    
    if(argc < 2)
    {
        std::cout << "Error: Wrong number of arguments" << std::endl;   
    }
    else
    {
        try{
            //Vector
            PmergeMe sort;
            sort.checkNums(argv);
            vector = sort.splitVec(argc, argv);
            std::cout << "Before: "; 
            sort.printVec(vector);
            std::clock_t vecStart = std::clock();
            vector = sort.mergeSortVec(vector);
            double vecTime = (std::clock() - vecStart) / static_cast<double>(CLOCKS_PER_SEC) * 1000000;
            std::cout << "After: "; 
            sort.printVec(vector);
            std::cout << "Time to process a range of " << argc - 1 << " elements " << "with std::vector<unsigned int> :" << vecTime << " us" << std::endl;

            //List
            list = sort.splitList(argc, argv);
            std::clock_t listStart = std::clock();
            list = sort.mergeSortList(list);
            double lstTime = (std::clock() - listStart) / static_cast<double>(CLOCKS_PER_SEC) * 1000000;
            std::cout << "Time to process a range of " << argc - 1 << " elements " << "with std::list<unsigned int> :" << lstTime << " us" << std::endl;
            
            
        }catch(std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }
}