/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 13:05:16 by gstrauss          #+#    #+#             */
/*   Updated: 2019/08/28 13:06:18 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstdup(t_list *head)
{
	t_list *ret;

	ret = NULL;
	while (true)
	{
		ret = ft_lstvalmake(&ret, head->content, head->fpos);
		if (head->next)
			head = head->next;
		else
			break ;
	}
	return (ret);
}
