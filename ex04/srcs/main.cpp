/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 05:15:22 by suchua            #+#    #+#             */
/*   Updated: 2023/04/25 17:42:30 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.h"

void	instr_replace(std::string& line, std::string s1, std::string s2)
{
	size_t	pos = 0;
	
	while (1)
	{
		if ((pos = line.find(s1, pos)) == std::string::npos)
			return ;
		pos = line.find(s1, pos);
		line.erase(pos, s1.length());
		line.insert(pos, s2);
	}
}

void	replace_str(std::ifstream& infile, char *file, std::string s1, std::string s2)
{
	std::ofstream outfile(strcat(file, ".replace"), std::ios::trunc);
	if (!outfile)
	{
		std::cout << "Error opening outfile\n";
		return ;
	}
	if (infile.is_open())
	{
		std::string line;
		while (std::getline(infile, line))
		{
			instr_replace(line, s1, s2);
			outfile << line << std::endl;	
		}
	}
	outfile.close();
}

int	main(int ac, char **av)
{
	if (ac != 4)
		return (1);
	std::ifstream infile(av[1]);
	if (!infile)
	{
		std::cout << "Error opening file\n";
		return (1);
	}
	replace_str(infile, av[1], av[2], av[3]);
	infile.close();
	return (0);
}
