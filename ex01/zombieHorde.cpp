/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilchahbi <ilchahbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 12:42:39 by ilchahbi          #+#    #+#             */
/*   Updated: 2025/01/24 12:04:01 by ilchahbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	if (N < 1)
	{
		std::cout << "Error : cannot create " << N << " zombie"<< std::endl;
		return (NULL);
 	}
	int		j = 0;
	Zombie *z;
	z = new Zombie[N];
	while (j < N)
	{
		z[j].setname(name);
		j++;
	}
	return (z);
}
