/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isgreater.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 13:04:02 by gstrauss          #+#    #+#             */
/*   Updated: 2019/08/28 13:04:27 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isgreater(t_list *listb, t_list *node)
{
	if (listb && node)
	{
		while (listb)
		{
			if (listb->fpos > node->fpos)
				return (0);
			listb = listb->next;
		}
	}
	return (1);
}
