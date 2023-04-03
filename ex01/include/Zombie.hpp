/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 03:49:01 by suchua            #+#    #+#             */
/*   Updated: 2023/04/04 03:51:15 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie{
	public:

		Zombie(void);
		~Zombie(void);
		void	announce(void);
		Zombie* zombieHorde( int N, std::string name );
	private:
		std::string	name;
};

#endif