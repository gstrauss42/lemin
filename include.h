#ifndef INCLUDE_H
# define INCLUDE_H

typedef struct		s_list
{
	char 	*room_name;
	int		ant;
	struct	s_list *links;
}					t_list;

#endif
