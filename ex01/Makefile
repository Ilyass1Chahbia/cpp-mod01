# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ilchahbi <ilchahbi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/23 12:41:08 by ilchahbi          #+#    #+#              #
#    Updated: 2025/01/24 10:31:09 by ilchahbi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombies

CC = c++

CFLAGS = -Wall -Wextra -Werror -fsanitize=address -g

SOURCES = Zombie.cpp main.cpp zombieHorde.cpp

OBJ = $(SOURCES:.cpp=.opp)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@

%.opp: %.cpp Zombie.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all
