/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilchahbi <ilchahbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 11:16:02 by ilchahbi          #+#    #+#             */
/*   Updated: 2025/01/31 15:42:14 by ilchahbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string input)
{
    name = input;
}
Zombie::~Zombie()
{
    std::cout << "the destructor called on " << this->name << "\n";
}

void    Zombie::announce()
{
    std::cout << name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}
