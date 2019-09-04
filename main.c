/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emanana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 11:53:57 by emanana           #+#    #+#             */
/*   Updated: 2019/09/04 10:52:26 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "includes/include.h"

p_list	*setup(char **input);

int main(int argc, char **argv)
{
	char **positions;
	char **links;

	positions = (char **)malloc(sizeof(char **));	
	links = (char **)malloc(sizeof(char **));
	if(argc > 1)
	{
		ft_assign(&positions, &links, argv);
		setup(argv);
	}
}

p_list	*setup(char **argv)
{
	int i;
	int p;
	p_list *tmp;
	p_list *current;
	p_list *start;
	
	p = 0;
	i = 0;
	while(argv[i])
	{
		if(ft_strcmp("##start", argv[i]) == 0 || ft_strcmp("##end", argv[i]) == 0)
			p++;
		i++;
	}
	if (p == 2)
	{
		i = 0;
		p = 0;
		
/*		while(start->links[i])
		{
			printf("%s\n", start->links[i]->name);
			i++;
		}*/
	}
	return(start);
}
