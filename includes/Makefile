SRCS = ft_assign.c ft_nodemake.c ft_chop.c

OBJS = ft_assign.o ft_nodemake.o ft_chop.o

all:
	gcc $(SRCS) -c
	ar rc include.a $(OBJS)

clean:
	rm $(OBJS)

fclean:
	rm $(OBJS)
	rm include.a
