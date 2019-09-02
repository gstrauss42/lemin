/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 09:24:06 by gstrauss          #+#    #+#             */
/*   Updated: 2019/08/30 09:30:23 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_rb(t_list **listb)
{
	int		i;
	t_list	*tmp;

	if (*listb && (*listb)->next)
	{
		i = (*listb)->fpos;
		tmp = ft_pop(listb, 1);
		ft_lstend(*listb, tmp);
		tmp = *listb;
		while (true)
		{
			if (tmp->next)
				tmp = tmp->next;
			else
				break ;
		}
		tmp->fpos = i;
	}
}
