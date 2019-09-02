/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 09:26:25 by gstrauss          #+#    #+#             */
/*   Updated: 2019/08/28 13:40:58 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_pb(t_list **lista, t_list **listb)
{
	int		i;
	t_list	*tmp;

	if (*lista)
	{
		i = (*lista)->fpos;
		if (*listb == NULL)
		{
			tmp = ft_pop(lista, 1);
			*listb = ft_lstnew((char *)tmp->content, tmp->content_size);
			(*listb)->fpos = i;
		}
		else
		{
			tmp = ft_pop(lista, 1);
			ft_lstadd(listb, tmp);
			(*listb)->fpos = i;
		}
	}
}
