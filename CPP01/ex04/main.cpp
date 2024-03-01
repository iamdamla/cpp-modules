/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:00:00 by derblang          #+#    #+#             */
/*   Updated: 2023/10/31 10:31:48 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>
#include <algorithm>

std::string replaceLine(std::string str, std::string replaceStr, std::string line)
{
    size_t pos = 0;
    pos = line.find(str);
    while(pos != std::string::npos)
    {
        line.erase(pos, str.length());
        line.insert(pos, replaceStr);
        pos = line.find(str, pos + replaceStr.length());
    }
    return line;
}

int main(int argc, char **argv)
{
    if(argc != 4)
    {
        std::cerr << "Error: Invalid number of arguments!" << std::endl;
        return 1;
    }
    const std::string filename(argv[1]);
    const std::string s1(argv[2]);
    const std::string s2(argv[3]);
    
    std::ifstream inFile(filename.c_str());
    std::ofstream outFile((filename + ".replace").c_str());
    if(inFile.fail())
    {
        std::cout << "Error opening the file: " << argv[1] << std::endl;
        return 1;
    }
    std::string line;
    if(outFile.fail())
    {
        std::cout << "Error opening the replace file!" << std::endl;
        return 1;
    }
    while(std::getline(inFile, line))
    {
        line = replaceLine(s1, s2, line);
        outFile << line << std::endl;
    }
    inFile.close();
    outFile.close();
    return 0;
}


