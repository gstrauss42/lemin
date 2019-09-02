/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstend.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 09:17:32 by gstrauss          #+#    #+#             */
/*   Updated: 2019/08/28 13:07:03 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstend(t_list *head, t_list *new)
{
	t_list *count;

	if (!new)
		return ;
	if (head)
	{
		count = head;
		while (count)
		{
			if (count->next)
				count = count->next;
			if (!count->next)
				break ;
		}
		count->next = new;
		new->next = NULL;
	}
}
