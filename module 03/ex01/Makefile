# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cwhis <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/12 17:52:30 by cwhis             #+#    #+#              #
#    Updated: 2021/10/24 18:35:57 by cwhis            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=clang++
CFLAGS=--std=c++98 -Wall -Wextra -Werror
NAME=trap
HEADS=ClapTrap.hpp ScavTrap.hpp
SRCS=main.cpp ClapTrap.cpp ScavTrap.cpp
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