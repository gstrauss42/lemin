# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/03 03:40:58 by gstrauss          #+#    #+#              #
#    Updated: 2019/09/04 12:20:59 by gstrauss         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PATHS = libft/libft.a includes/include.a

FLAGS = -Wall -Werror -Wextra

all:
	gcc $(PATHS) main.c $(FLAGS)

compile:
	make -C libft
	make -C libft clean
	make -C includes
	make -C includes clean
	gcc libft/libft.a main.c includes/include.a $(FLAGS)

debug:
	gcc $(PATHS) -g
