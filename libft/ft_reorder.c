/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reorder.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 13:28:45 by gstrauss          #+#    #+#             */
/*   Updated: 2019/08/30 11:59:51 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	action(t_list **lista, t_list *ttmp);

void	ft_reorder(t_list **lista)
{
	t_list	*tmp;
	t_list	*ttmp;
	int		check;

	check = 1000000;
	tmp = (*lista);
	while (true)
	{
		if (tmp->fpos < check)
		{
			ttmp = tmp;
			check = tmp->fpos;
		}
		if (tmp->next)
			tmp = tmp->next;
		else
			break ;
	}
	action(lista, ttmp);
}

void	action(t_list **lista, t_list *ttmp)
{
	while ((*lista)->fpos != ttmp->fpos)
	{
		if (ft_lstplen(*lista, ttmp) >= (ft_lstlen(*lista) / 2) + 1)
		{
			write(1, "rra\n", 4);
			ft_rra(lista);
		}
		else
		{
			write(1, "ra\n", 3);
			ft_ra(lista);
		}
	}
}
