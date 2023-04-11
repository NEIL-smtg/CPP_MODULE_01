/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 03:08:46 by suchua            #+#    #+#             */
/*   Updated: 2023/04/11 15:18:37 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie " << name << " exiting..." << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << name << " " << "BraiiiiiiinnnzzzZ..." << std::endl;
}
