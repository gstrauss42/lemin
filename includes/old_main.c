/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emanana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 11:53:57 by emanana           #+#    #+#             */
/*   Updated: 2019/09/03 06:30:34 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "include.h"

p_list	*setup(char **input);

int main(int argc, char **argv)
{
	if(argc > 1)
	{
		setup(argv);
	}
}

p_list	*setup(char **input)
{
	int i;
	int p;
	p_list *tmp;
	p_list *current;
	p_list *start;
	c_list *head;
	
	p = 0;
	i = 0;
	while(input[i])
	{
		if(ft_strcmp("##start", input[i]) == 0 || ft_strcmp("##end", input[i]) == 0)
			p++;
		i++;
	}
	if (p == 2)
	{
		p = 0;
		i = 1;
		while(ft_strcmp(input[i], "##start"))
				i++;
		i++;
		start = (p_list *)malloc(100000); //HOW MUCH MEMORY IS ENOUGH!?!?!?!?!???!!!!???????...!?!?!?!????
		start->name = ft_strdup(ft_strsplit(input[i], ' ')[0]);
		start->ant = 0;
		while(input[i] && ft_strchr(input[i], '-') == NULL)
			i++;
		start->links = (p_list **)malloc(100000);
		head = (c_list *)malloc(100000);
		head->start = start;
		head->path = strdup(" ");
/*		while(input[i])
		{
			if(ft_strstr(input[i], start->name) != NULL)
			{
				tmp = (p_list *)malloc(100000);
				tmp->ant = 0;
				tmp->name = ft_strdup(ft_strcut(ft_strstr(input[i], "-"), '-'));
				start->links[p] = tmp;
				p++;
			}
			i++;
		}*/
		i = 0;
		while(start->links[i])
		{
			printf("%s\n", start->links[i]->name);
			i++;
		}
	}
	return(start);
}
