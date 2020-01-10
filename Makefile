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

FLAGS = -Wall -Werror -Wextra

DATA = main.c configure.c data_val_mem.c link_insert.c room_insert.c libft/libft.a

all:
	gcc $(DATA) $(FLAGS)

compile:
	make -C libft
	make -C libft clean
	gcc $(DATA) $(FLAGS)

debug:
	gcc $(PATHS) -g
