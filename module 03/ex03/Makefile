# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cwhis <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/12 17:52:30 by cwhis             #+#    #+#              #
#    Updated: 2021/10/24 19:19:55 by cwhis            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=clang++
CFLAGS=--std=c++98 -Wall -Wextra -Werror -Wshadow -Wno-shadow
NAME=trap
HEADS=ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp
SRCS=main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
OBJS=$(SRCS:.cpp=.o)

all: $(NAME)	

$(NAME): $(OBJS) $(HEADS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $<

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re