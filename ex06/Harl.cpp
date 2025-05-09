/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilchahbi <ilchahbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 15:40:00 by ilchahbi          #+#    #+#             */
/*   Updated: 2025/01/31 17:06:45 by ilchahbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void    Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void    Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now" << std::endl;
}

void    Harl::complain(std::string level)
{
	void (Harl::*fptr[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string array[4] = {"DEBUG","INFO","WARNING","ERROR"};
    
    int n = 0;
	while(n < 4)
	{
		if (level == array[n])
		{
			switch (n)
			{
				case 0:
					for (int i = n; i < 4; i++)
					{
						(this->*fptr[i])();
					}
					break;
				case 1:
					for (int i = n; i < 4; i++)
					{
						(this->*fptr[i])();
					}
					break;
				case 2:
					for (int i = n; i < 4; i++)
					{
						(this->*fptr[i])();
					}
					break;
				case 3:
					for (int i = n; i < 4; i++)
					{
						(this->*fptr[i])();
					}
					break;
			}
			(this->*fptr[n])();
			return;
		}
        n++;
	}
	std::cout << "Probably complaining about insignificant problems" << std::endl;
}
