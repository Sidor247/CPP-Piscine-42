# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cwhis <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/12 13:33:21 by cwhis             #+#    #+#              #
#    Updated: 2021/11/10 12:23:39 by cwhis            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=clang++
CFLAGS=-Wall -Wextra -Werror
NAME=identify
HEADS=Base.hpp A.hpp B.hpp C.hpp identify.hpp
SRCS=Base.cpp identify.cpp main.cpp
OBJS=$(SRCS:.cpp=.o)

all: $(NAME)	

$(NAME): $(OBJS) $(HEADS) Makefile
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp Makefile
	$(CC) $(CFLAGS) -c $<

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re