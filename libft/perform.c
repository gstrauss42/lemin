/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   perform.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 13:42:17 by gstrauss          #+#    #+#             */
/*   Updated: 2019/09/02 09:55:52 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	p1(t_list **lista, t_list **listb, t_list *node)
{
	ft_rb(listb);
	if (ft_posdif(*lista, node) != 0 && ft_lstlen(*listb)\
			/ 2 < ft_lstplen(*listb, node) && *listb != node)
	{
		ft_ra(lista);
		write(1, "rr\n", 4);
	}
	else
		write(1, "rb\n", 4);
}

void	t1(t_list **lista, t_list **listb, t_list *node)
{
	if (ft_lstplen(*listb, node) > (ft_lstlen(*listb) / 2))
	{
		while (*listb && node && (*listb)->fpos != node->fpos)
		{
			if (ft_lstlen(*listb) - ft_lstplen(*listb, node)\
					< (ft_lstlen(*listb) / 2) + 1 && *lista != node)
			{
				ft_rrb(listb);
				if (ft_posdif(*lista, node) != 0 && ft_lstlen(*lista)\
						/ 2 < ft_lstplen(*lista, node))
				{
					ft_rra(lista);
					write(1, "rrr\n", 4);
				}
				else
					write(1, "rrb\n", 4);
			}
			else
				p1(lista, listb, node);
		}
	}
}

void	t2(t_list **lista, t_list **listb, t_list *node)
{
	if (ft_lstplen(*listb, node) <= (ft_lstlen(*listb) / 2))
	{
		while (*listb && node && *listb != node)
		{
			ft_rb(listb);
			if (ft_lstlen(*listb) - ft_lstplen(*listb, node)\
					>= ft_posdif(*lista, node)\
					|| ft_posdif(*lista, node) < ft_lstlen(*lista) / 2)
			{
				ft_ra(lista);
				write(1, "rr\n", 3);
			}
			else
				write(1, "rb\n", 3);
		}
	}
}

void	t3(t_list **lista, t_list **listb)
{
	if (ft_isgreater(*lista, *listb) == 1 && (*lista)->next)
	{
		ft_ra(lista);
		write(1, "ra\n", 3);
	}
	ft_pa(lista, listb);
	write(1, "pa\n", 3);
}

void	perform(t_list **lista, t_list **listb, t_list *node)
{
	t1(lista, listb, node);
	t2(lista, listb, node);
	if (ft_posdif(*lista, node) != 0)
	{
		if (ft_posdif(*lista, node) <= ft_lstlen(*lista) / 2)
		{
			while (ft_posdif(*lista, node) != 0)
			{
				ft_ra(lista);
				write(1, "ra\n", 3);
			}
		}
		if (ft_posdif(*lista, node) > ft_lstlen(*lista) / 2)
		{
			while (ft_posdif(*lista, node) != 0)
			{
				ft_rra(lista);
				write(1, "rra\n", 4);
			}
		}
	}
	t3(lista, listb);
}
