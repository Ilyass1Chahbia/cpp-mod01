/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilchahbi <ilchahbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 17:35:18 by ilchahbi          #+#    #+#             */
/*   Updated: 2025/01/25 14:22:20 by ilchahbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void replaceInFile(const std::string& filename, const std::string& s1, const std::string& s2)
{
    std::ifstream inputFile(filename);
    
    if (!inputFile) {
        std::cerr << "Error opening file: " << filename << std::endl;
        return;
    }
    std::ofstream outputFile(filename + ".replace");
    if (!outputFile) {
        std::cerr << "Error creating file: " << filename << ".replace" << std::endl;
        return;
    }
    std::string line;

    getline(inputFile, line, '\0');
    size_t pos = 0;
    while ((pos = line.find(s1, pos)) != std::string::npos)
    {
        line.erase(pos, s1.length());
        line.insert(pos, s2);
        pos += s2.length();
    }
    outputFile << line;
}

int main(int ac, char **av)
{
    if (ac != 4)
    {
      std::cerr << "Error : Wrong Number Of Arguments!" << std::endl;
    return (1);  
    }
    replaceInFile(av[1], av[2], av[3]);
    return (0);
}
