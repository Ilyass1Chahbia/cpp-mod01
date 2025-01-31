/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilchahbi <ilchahbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 11:27:27 by ilchahbi          #+#    #+#             */
/*   Updated: 2025/01/31 16:28:17 by ilchahbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void    HumanA::attack()
{
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}

HumanA::HumanA(const std::string& humanName, Weapon& humanWeapon): name(humanName), weapon(humanWeapon)
{
}

HumanA::~HumanA()
{
    std::cout << this->name << " has been destroyed" << std::endl;
}
