# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/19 11:39:22 by gstrauss          #+#    #+#              #
#    Updated: 2019/07/26 10:56:51 by gstrauss         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Werror -Wextra -c

SRCS = ft_pa.c ft_ra.c ft_rra.c ft_sa.c ft_pb.c \
	   ft_rb.c ft_rrb.c ft_sb.c \

OBJS = ft_pa.o ft_ra.o ft_rra.o ft_sa.o ft_pb.o \
	   ft_rb.o ft_rrb.o ft_sb.o \

all:
	gcc $(FLAGS) $(SRCS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
