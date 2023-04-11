/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 04:23:04 by suchua            #+#    #+#             */
/*   Updated: 2023/04/11 15:23:46 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>

class	Weapon
{
	public:
		Weapon(void);
		Weapon(std::string type);
		~Weapon(void);
		std::string	&getType(void);
		void	setType(std::string type);
	private:
		std::string	type;
};

#endif
