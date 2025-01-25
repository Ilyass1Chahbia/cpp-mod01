# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ilchahbi <ilchahbi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/25 15:39:13 by ilchahbi          #+#    #+#              #
#    Updated: 2025/01/25 15:39:42 by ilchahbi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harlFilter

CC = c++

CFLAGS = -Wall -Wextra -Werror -fsanitize=address -g

SOURCES = Harl.cpp main.cpp

OBJ = $(SOURCES:.cpp=.opp)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@

%.opp: %.cpp Harl.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all
