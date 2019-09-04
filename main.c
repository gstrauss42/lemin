/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emanana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 11:53:57 by emanana           #+#    #+#             */
/*   Updated: 2019/09/04 12:27:53 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "includes/include.h"

void	node_check(p_list *tmp);
void	setup(char **positions, char **links, p_list **start, p_list **end);
void	test(char **positions, char **links);

int main(int argc, char **argv)
{
	char **positions;
	char **links;
	p_list *start;
	p_list *end;

	start = NULL;
	end = NULL;
	positions = (char **)malloc(sizeof(char **) * argc);	
	links = (char **)malloc(sizeof(char **) * argc);
	if(argc > 1)
	{
		ft_assign(&positions, &links, argv);
//		test(positions, links);
		setup(positions, links, &start, &end);
	}
	return (0);
}

void	setup(char **positions, char **links, p_list **start, p_list **end)
{
	int lin;

	lin = 0;
	*start = ft_nodemake(positions[0]);
	ft_chop(&positions);
	*end = ft_nodemake(positions[0]);
	ft_chop(&positions);
	
	node_check(*start);
	node_check(*end);
	test(positions, links);

	while(links[lin])
		links++;

/*		while(start->links[i])
		{
			printf("%s\n", start->links[i]->name);
			i++;
		}*/
}

void	node_check(p_list *tmp)
{
	int i;

	i = 0;
	if(tmp)
	{
		printf("name: %s\n", tmp->name);
		printf("ant: %d\n", tmp->ant);
		while(tmp->links[i])
		{
			printf("links: %s\n", tmp->links[i]->name);
			i++;
		}
	}
}

void	test(char **positions, char **links)
{
	int i;

	i = 0;
	printf("\n");
	printf("POSITIONS:\n");
	while(positions[i])
	{
		printf("%s\n", positions[i]);
		i++;
	}
	i = 0;
	printf("\n");
	printf("LINKS:\n");
	while(links[i])
	{
		printf("%s\n", links[i]);
		i++;
	}
}

