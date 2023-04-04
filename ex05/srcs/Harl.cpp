/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 23:32:04 by suchua            #+#    #+#             */
/*   Updated: 2023/04/05 00:37:57 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

std::pair<std::string, void(*)(void)> harl_pairs[4];

Harl::Harl(void)
{
	std::cout << "Harl enter" << std::endl;
	pairs[0] = std::make_pair("DEBUG", &Harl::debug);
	pairs[1] = std::make_pair("INFO", &Harl::info);
	pairs[2] = std::make_pair("WARNING", &Harl::warning);
	pairs[3] = std::make_pair("ERROR", &Harl::error);
}

Harl::~Harl(void)
{
	std::cout << "Harl leaving..." << std::endl;
}

void	Harl::complain(std::string level)
{
	for (int i = 0; i < 4; i++)
		if (level == pairs[i].first)
			(this->*pairs[i].second)();	
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn\'t putenough bacon in my burger! If you did, I wouldn\'t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I\'ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
