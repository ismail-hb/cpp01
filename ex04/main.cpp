/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismail <ismail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 08:39:45 by ismail            #+#    #+#             */
/*   Updated: 2025/03/04 18:12:20 by ismail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

void	replace(std::ifstream &infile, std::ofstream &outfile, std::string &s1, std::string &s2)
{
	std::string	str;
	int			pos;

	while(std::getline(infile, str))
	{
		pos = 0;
		while((pos = str.find(s1, pos)) != std::string::npos)
		{
			str.erase(pos, s1.length());
			str.insert(pos, s2);
			pos += s2.length();
		}
		outfile << str <<std::endl;
	}
}

int	main(int ac, char **av)
{
	std::string	filename;
	std::string	s1;
	std::string s2;
	std::string outname;

	if (ac != 4)
		return(std::cerr << "usage : ./exec <file> s1 s2" << std::endl, 1);
	filename = av[1];
	s1 = av[2];
	s2 = av[3];
	if (s1.empty())
		return(std::cerr << "ERROR: s1 cannot be empty" << std::endl, 1);
	std::ifstream infile(filename);
	if (!infile)
		return(std::cerr << "ERROR: can't open file" << std::endl, 1);
	outname = filename + ".replace";
	std::ofstream outfile(outname);
	if (!outfile)
		return(std::cerr << "ERROR: can't create file" << std::endl, 1);
	replace(infile, outfile, s1, s2);
	infile.close();
	outfile.close();
	return (0);
}
