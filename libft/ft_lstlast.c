/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 13:07:21 by gstrauss          #+#    #+#             */
/*   Updated: 2019/08/28 13:13:08 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *head)
{
	if (head != NULL)
	{
		while (head)
		{
			if (head->next)
				head = head->next;
			else
				break ;
		}
	}
	return (head);
}
