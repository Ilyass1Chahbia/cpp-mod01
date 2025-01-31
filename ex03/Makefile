# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ilchahbi <ilchahbi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/24 11:23:17 by ilchahbi          #+#    #+#              #
#    Updated: 2025/01/31 12:34:45 by ilchahbi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Combat

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SOURCES = HumanA.cpp HumanB.cpp main.cpp Weapon.cpp

OBJ = $(SOURCES:.cpp=.opp)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@

%.opp: %.cpp Weapon.hpp HumanA.hpp HumanB.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all
