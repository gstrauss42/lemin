# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/03 03:40:58 by gstrauss          #+#    #+#              #
#    Updated: 2019/09/04 11:06:25 by gstrauss         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PATHS = libft/libft.a includes/include.a

all:
	gcc $(PATHS) main.c

compile:
	make -C libft
	make -C libft clean
	make -C includes
	make -C includes clean
	gcc libft/libft.a main.c includes/include.a


debug:
	gcc libft/libft.a main.c -g
