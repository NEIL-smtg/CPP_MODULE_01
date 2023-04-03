/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 04:32:53 by suchua            #+#    #+#             */
/*   Updated: 2023/04/04 05:12:34 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
{
	this->name = name;
	this->weapon = &weapon;
}

HumanA::~HumanA(void)
{
}

void	HumanA::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

void	HumanA::attack(void)
{
	std::cout << name << " " << "attacks with their " << weapon->getType() << std::endl; 
}
