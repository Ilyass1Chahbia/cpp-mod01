/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilchahbi <ilchahbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 12:41:52 by ilchahbi          #+#    #+#             */
/*   Updated: 2025/01/31 15:53:17 by ilchahbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(): name("\0")
{
    std::cout << "default constructor called on " << this->name << "\n";
}

void    Zombie::setname(std::string n)
{
    name = n;
}

void    Zombie::announce()
{
    std::cout << name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "the destructor called on " << this->name << "\n";
}