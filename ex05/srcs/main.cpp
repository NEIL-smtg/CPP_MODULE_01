/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 23:59:46 by suchua            #+#    #+#             */
/*   Updated: 2023/04/05 00:16:04 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	h;

	h.complain("debug");
	h.complain("info");
	h.complain("warning");
	h.complain("error");
	h.complain("21");
	return (0);
}
