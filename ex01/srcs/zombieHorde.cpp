/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 03:47:54 by suchua            #+#    #+#             */
/*   Updated: 2023/04/04 04:02:00 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	Zombie::zombieHorde( int N, std::string name )
{
	Zombie	*z;

	z = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		z[i].name = name;
		z[i].announce();
	}
	return (z);
}
