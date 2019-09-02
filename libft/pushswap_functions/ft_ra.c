/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 14:58:03 by gstrauss          #+#    #+#             */
/*   Updated: 2019/08/30 09:30:11 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_ra(t_list **lista)
{
	int		i;
	t_list	*tmp;

	if (*lista && (*lista)->next)
	{
		i = (*lista)->fpos;
		tmp = ft_pop(lista, 1);
		ft_lstend(*lista, tmp);
		tmp = *lista;
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
