/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilchahbi <ilchahbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 15:40:09 by ilchahbi          #+#    #+#             */
/*   Updated: 2025/01/25 15:41:38 by ilchahbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_CPP
# define HARL_CPP

#include <iostream>

class Harl
{
private:
    void    debug(void);
    void    info(void);
    void    warning(void);
    void    error(void);
    
public:
    void    complain(std::string level);
};

#endif