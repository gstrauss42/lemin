/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 08:56:15 by gstrauss          #+#    #+#             */
/*   Updated: 2019/09/02 10:33:01 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		important(t_list **lista, t_list **listb, t_list *tmp, int y)
{
	if (ft_lstplen(*listb, tmp) > (ft_lstlen(*listb)\
				/ 2 && ft_lstlen(*listb) > 2))
	{
		y = ft_lstlen(*listb) - ft_lstplen(*listb, tmp) + 1;
		if (ft_posdif(*lista, tmp) != 0)
			y = y + ft_posdif(*lista, tmp);
	}
	else if (ft_lstplen(*listb, tmp) <= (ft_lstlen(*listb) / 2))
	{
		y = ft_lstplen(*listb, tmp) + 1;
		if (ft_posdif(*lista, tmp) != 0)
			y = y + ft_posdif(*lista, tmp);
	}
	return (y);
}

void	algo(t_list **lista, t_list **listb)
{
	t_list	*ret;
	t_list	*tmp;
	int		check;
	int		y;

	tmp = *listb;
	while (tmp && *lista)
	{
		y = 0;
		check = 10000000;
		tmp = *listb;
		while (tmp)
		{
			if (tmp)
				y = important(lista, listb, tmp, y);
			if (y < check)
			{
				check = y;
				ret = tmp;
			}
			if (tmp->next)
				tmp = tmp->next;
			else
				break ;
		}
		if (*lista)
			perform(lista, listb, ret);
		ret = *listb;
	}
}
