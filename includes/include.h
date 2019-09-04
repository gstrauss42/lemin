#ifndef INCLUDE_H
# define INCLUDE_H

typedef struct		y_list
{
	char 	*name;
	int		ant;
	struct	y_list **links;
}					p_list;

void	ft_chop(char ***str);
void	ft_assign(char ***positions, char ***links, char **argv);
p_list	*ft_nodemake(char *str);

#endif
