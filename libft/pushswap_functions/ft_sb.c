/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 09:30:49 by gstrauss          #+#    #+#             */
/*   Updated: 2019/08/30 09:34:10 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_sb(t_list **listb)
{
	int		i;
	t_list	*tmp;

	if (*listb && (*listb)->next)
	{
		i = (*listb)->next->fpos;
		tmp = ft_pop(listb, 2);
		ft_lstadd(listb, tmp);
		(*listb)->fpos = i;
	}
}
