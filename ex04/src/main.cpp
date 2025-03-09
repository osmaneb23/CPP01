/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouayed <obouayed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 01:41:29 by obouayed          #+#    #+#             */
/*   Updated: 2025/03/09 18:13:51 by obouayed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <stdlib.h>

void replaceInFile(const std::string &filename, const std::string &s1, const std::string &s2)
{
    std::ifstream ifile(filename.c_str());
    if (!ifile.is_open())
    {
        std::cerr << "Error: could not open file" << std::endl;
        exit(1);
    }
    std::string outputFilename = filename + ".replace";
    std::ofstream ofile(outputFilename.c_str());
    if (!ofile.is_open())
    {
        std::cerr << "Error: could not create output file" << std::endl;
        ifile.close();
        exit(1);
    }
    std::string line;
    while (std::getline(ifile, line))
    {
        size_t position = 0;
        std::string newLine;
        
        while (position < line.length())
        {
            size_t findPos = line.find(s1, position);
            if (findPos == std::string::npos || s1.empty())
            {
                newLine.append(line.substr(position));
                break;
            }
            newLine.append(line.substr(position, findPos - position));
            newLine.append(s2);
            position = findPos + s1.length();
        }
        ofile << newLine;
        if (!ifile.eof())
            ofile << std::endl;
    }
    ifile.close();
    ofile.close();
}

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Usage: " << av[0] << " <filename> <s1> <s2>" << std::endl;
		return (1);
	}
	std::string filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];
	replaceInFile(filename, s1, s2);
	return (0);
}
