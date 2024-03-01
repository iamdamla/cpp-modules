/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 10:11:30 by derblang          #+#    #+#             */
/*   Updated: 2024/02/23 09:50:32 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"
#include <cstdlib>

#define MAX_VAL 750

int main()
{
    try{
    Array<int> intArr;
    std::cout << "intArr size : " << intArr.size() << std::endl;
    std::cout << std::endl;

    Array<std::string> strArr(7);
    Array<std::string> strCopy(2);
    std::cout << "strArr size : " << strArr.size() << std::endl;
    strArr[1] = "Hello";
    strArr[3] = "How ";
    strArr[4] = "are";
    strArr[5] = "you";
    strCopy = strArr;
    for(int i = 0; i < strCopy.size(); i++)
    {std::cout << strCopy[i] << std::endl;}
    std::cout << std::endl;


    Array<float> floatArr(2);
    std::cout << "floatArr size : " << floatArr.size() << std::endl;
    floatArr[0] = 20.4f;
    floatArr[1] = 42.4f;
    for(int i = 0; i < floatArr.size(); i++)
    {
        std::cout << floatArr[i] << std::endl;
    }
    std::cout << std::endl;

    
    Array<int> arr(3);
    Array<int> arr2(9);

    std::cout << "arr size : " << arr.size() << std::endl;
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr2 = arr;
    for(int i = 0; i < arr2.size(); i++)
    {
        std::cout << arr2[i] << std::endl;
    }
    std::cout << std::endl;
    
    const Array<int> myArr = Array<int>(5);
    std::cout << "myArr read 4 : " << myArr[3] << std::endl;

    
    }
    catch(std::out_of_range &e)
    {
        std::cout << "\033[31mIndex doesn't exist : \033[0m" << e.what() << std::endl;
    }
   
    

	return 0;
}


// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr <<  e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }