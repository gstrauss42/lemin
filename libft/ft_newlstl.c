/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nlstsl.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 10:11:19 by gstrauss          #+#    #+#             */
/*   Updated: 2019/08/28 13:22:29 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_newlstl(int len)
{
	int		i;
	t_list	*head;
	t_list	*cpy;

	i = 0;
	while (i < len)
	{
		cpy = ft_lstezmake(&head, "blank");
		head = cpy;
		i++;
	}
	return (head);
}
