/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 23:59:46 by suchua            #+#    #+#             */
/*   Updated: 2023/04/05 00:48:22 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	get_level(Harl *harl, std::string log)
{
	for (int i = 0; i < 4; i++)
		if (log == harl->pairs[i].first)
			return (i);
	return (-1);
}

void	filter_begin(std::string log)
{
	Harl	harl;

	switch (get_level(&harl, log))
	{
		case (0):
			std::cout << "[ DEBUG ]" << std::endl;
			harl.complain("DEBUG");
		case (1):
			std::cout << "[ INFO ]" << std::endl;
			harl.complain("INFO");
		case (2):
			std::cout << "[ WARNING ]" << std::endl;
			harl.complain("WARNING");
		case (3):
			std::cout << "[ ERROR ]" << std::endl;
			harl.complain("ERROR");
		break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

int	main(int ac, char **av)
{
	if (ac == 1)
		filter_begin("DEBUG");
	else
		filter_begin(av[1]);
	return (0);
}
