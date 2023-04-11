/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 03:03:18 by suchua            #+#    #+#             */
/*   Updated: 2023/04/11 15:17:03 by suchua           ###   ########.fr       */
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
		Zombie	*newZombie(std::string name);
		void	randomChump(std::string name);
	private:
		std::string	name;
};

#endif
