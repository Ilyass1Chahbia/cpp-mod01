/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilchahbi <ilchahbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 11:24:02 by ilchahbi          #+#    #+#             */
/*   Updated: 2025/01/24 12:44:52 by ilchahbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string&     Weapon::getType()
{
    return (type);
}

void    Weapon::setType(const std::string& newType)
{
    type = newType;
}

Weapon::Weapon(const std::string& weaponType) : type(weaponType)
{
}
