/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 14:52:26 by gstrauss          #+#    #+#             */
/*   Updated: 2019/08/30 09:36:41 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_sa(t_list **lista)
{
	int		i;
	t_list	*tmp;

	if (*lista && (*lista)->next)
	{
		i = (*lista)->next->fpos;
		tmp = ft_pop(lista, 2);
		ft_lstadd(lista, tmp);
		(*lista)->fpos = i;
	}
}
