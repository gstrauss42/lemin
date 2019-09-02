/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 09:21:11 by gstrauss          #+#    #+#             */
/*   Updated: 2019/08/30 09:31:27 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_rrb(t_list **listb)
{
	int		i;
	t_list	*tmp;

	tmp = *listb;
	if (*listb && (*listb)->next)
	{
		while (true)
		{
			if (tmp->next)
				tmp = tmp->next;
			else
				break ;
		}
		i = tmp->fpos;
		tmp = ft_pop(listb, ft_lstlen(*listb));
		ft_lstadd(listb, tmp);
		(*listb)->fpos = i;
	}
}
