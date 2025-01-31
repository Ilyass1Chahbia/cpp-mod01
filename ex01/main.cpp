/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilchahbi <ilchahbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 12:41:49 by ilchahbi          #+#    #+#             */
/*   Updated: 2025/01/31 12:29:43 by ilchahbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int N = 5;
    std::string name = "Zed";

    Zombie* horde = zombieHorde(N, name);

    if (horde)
    {
        for (int i = 0; i < N; ++i)
        {
            horde[i].announce();
        }
        delete[] horde;
    }
    else
    {
        std::cerr << "Failed to create zombie horde." << std::endl;
    }

    return 0;
}
