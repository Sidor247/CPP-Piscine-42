# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cwhis <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/04 20:01:24 by cwhis             #+#    #+#              #
#    Updated: 2021/10/05 18:29:14 by cwhis            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=clang++
CFLAGS=-Wall -Wextra -Werror
NAME=fixed
HEADS=Fixed.hpp
SRCS=main.cpp Fixed.cpp
OBJS=$(SRCS:.cpp=.o)

all: $(NAME)	

$(NAME): $(OBJS) $(HEADS)
	$(CC) $(OBJS) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re