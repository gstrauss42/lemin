/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstvalmake.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 13:18:16 by gstrauss          #+#    #+#             */
/*   Updated: 2019/08/28 13:21:34 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstvalmake(t_list **head, char *input, int value)
{
	t_list *tmp;

	tmp = *head;
	if (!*head)
		*head = ft_lstnew(input, ft_strlen(input) + 1);
	else
		ft_lstend(*head, ft_lstnew(input, ft_strlen(input) + 1));
	while (true)
	{
		if (tmp->next)
			tmp = tmp->next;
		else
			break ;
	}
	tmp->fpos = value;
	return (*head);
}
