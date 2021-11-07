# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cwhis <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/30 19:22:49 by cwhis             #+#    #+#              #
#    Updated: 2021/09/30 19:25:12 by cwhis            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=clang++
NAME=karenFilter
CFLAGS=-Wall -Wextra -Werror
HEADS=Karen.hpp
SRCS=Karen.cpp main.cpp
OBJS=$(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS) $(HEADS) Makefile
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c
	$(CC) -O3 $(CFLAGS) $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
