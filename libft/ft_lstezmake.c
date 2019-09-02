/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstezmake.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 12:03:43 by gstrauss          #+#    #+#             */
/*   Updated: 2019/07/16 07:49:53 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstezmake(t_list **head, char *input)
{
	if (!*head)
		*head = ft_lstnew(input, ft_strlen(input) + 1);
	else
		ft_lstend(*head, ft_lstnew(input, ft_strlen(input) + 1));
	return (*head);
}
