/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 03:08:46 by suchua            #+#    #+#             */
/*   Updated: 2023/04/04 03:46:35 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
}

Zombie::~Zombie(void)
{
	std::cout << "Deleting zombie " << name << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << name << " " << "BraiiiiiiinnnzzzZ..." << std::endl;
}
