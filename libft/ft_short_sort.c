/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 09:05:47 by gstrauss          #+#    #+#             */
/*   Updated: 2019/09/02 09:48:32 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	last(t_list **lista, t_list **listb);
void	n3(t_list **lista);
void	n5(t_list **lista, t_list **listb);

void	ft_short_sort(t_list **lista, t_list **listb, int i)
{
	if (i == 2)
	{
		ft_sa(lista);
		write(1, "sa\n", 3);
		return ;
	}
	if (i == 3)
	{
		n3(lista);
		return ;
	}
	if (i == 5)
	{
		ft_pb(lista, listb);
		ft_pb(lista, listb);
		write(1, "pb\npb\n", 6);
		n3(lista);
		if ((*listb)->fpos < (*listb)->next->fpos)
		{
			ft_sb(listb);
			write(1, "sb\n", 3);
		}
		n5(lista, listb);
		return ;
	}
}

void	n5(t_list **lista, t_list **listb)
{
	if ((*lista)->next->fpos > (*listb)->fpos)
	{
		ft_pa(lista, listb);
		write(1, "pa\n", 3);
		if ((*lista)->next->fpos < (*lista)->fpos)
		{
			ft_sa(lista);
			write(1, "sa\n", 3);
		}
		ft_pa(lista, listb);
		write(1, "pa\n", 3);
		if ((*lista)->next->fpos < (*lista)->fpos)
		{
			ft_sa(lista);
			write(1, "sa\n", 3);
		}
	}
	else
	{
		last(lista, listb);
		last(lista, listb);
	}
}

void	n3(t_list **lista)
{
	if ((*lista)->fpos > (*lista)->next->fpos)
	{
		ft_sa(lista);
		write(1, "sa\n", 3);
	}
	if ((*lista)->next->next->fpos < (*lista)->next->fpos)
	{
		ft_rra(lista);
		write(1, "rra\n", 4);
	}
	if ((*lista)->fpos > (*lista)->next->fpos)
	{
		ft_sa(lista);
		write(1, "sa\n", 3);
	}
}

void	extend(t_list **lista, t_list **listb)
{
	if ((*listb)->fpos > (*lista)->next->fpos)
	{
		ft_pa(lista, listb);
		write(1, "pa\n", 3);
		if ((*lista)->fpos > (*lista)->next->fpos)
		{
			ft_sa(lista);
			write(1, "sa\n", 3);
			ft_ra(lista);
			write(1, "ra\n", 3);
			ft_sa(lista);
			write(1, "sa\n", 3);
		}
		ft_rra(lista);
		write(1, "rra\n", 4);
	}
}

void	last(t_list **lista, t_list **listb)
{
	if ((*listb)->fpos < (*lista)->fpos)
	{
		ft_pa(lista, listb);
		write(1, "pa\n", 3);
		if ((*lista)->fpos > (*lista)->next->fpos)
		{
			ft_sa(lista);
			write(1, "sa\n", 3);
		}
		if ((*lista)->next->fpos > (*lista)->next->next->fpos)
		{
			ft_ra(lista);
			write(1, "ra\n", 3);
			ft_sa(lista);
			write(1, "sa\n", 3);
			ft_rrb(lista);
			write(1, "rrb\n", 4);
		}
	}
	extend(lista, listb);
}
