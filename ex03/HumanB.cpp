/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilchahbi <ilchahbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 11:27:22 by ilchahbi          #+#    #+#             */
/*   Updated: 2025/01/24 12:42:08 by ilchahbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void    HumanB::attack()
{
    if (weapon)
    {
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    }
    else
    {
        std::cout << name << " attacks with their hands" << std::endl;
    }
}

void    HumanB::setWeapon(Weapon& newWeapon)
{
        weapon = &newWeapon;
}

HumanB::HumanB(const std::string& humanName) : name(humanName), weapon(NULL)
{
}
