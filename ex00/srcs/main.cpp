/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 03:08:39 by suchua            #+#    #+#             */
/*   Updated: 2023/04/11 15:19:39 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	z1;
	Zombie	*z2;

	z1.randomChump("neil_1");
	z2 = z1.newZombie("neil_2");
	z2->announce();

	delete z2;
	return (0);
}
