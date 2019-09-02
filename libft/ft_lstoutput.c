/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstoutput.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 10:19:40 by gstrauss          #+#    #+#             */
/*   Updated: 2019/08/30 10:20:43 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstoutput(t_list **lista, t_list **listb)
{
	t_list *tmp;
	t_list *ttmp;

	tmp = *lista;
	write(1, "Lista:\n", 7);
	while (tmp && tmp->content)
	{
		ft_putendl((char *)tmp->content);
		if (tmp->next)
			tmp = tmp->next;
		else
			break ;
	}
	ttmp = *listb;
	write(1, "Listb:\n", 7);
	while (ttmp && ttmp->content)
	{
		ft_putendl((char *)ttmp->content);
		if (ttmp->next)
			ttmp = ttmp->next;
		else
			break ;
	}
	write(1, "\n", 1);
}
