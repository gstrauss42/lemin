/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmake.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 15:26:18 by gstrauss          #+#    #+#             */
/*   Updated: 2019/08/28 13:17:26 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmake(char **input)
{
	int		i;
	char	**split;
	t_list	*head;

	i = 0;
	head = NULL;
	if (!input[2])
	{
		split = ft_strsplit(input[1], ' ');
		while (split[i] != NULL)
		{
			ft_lstezmake(&head, split[i]);
			i++;
		}
	}
	if (input[2])
	{
		i = 1;
		while (input[i])
		{
			ft_lstezmake(&head, input[i]);
			i++;
		}
	}
	return (head);
}
