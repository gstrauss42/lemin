/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcheck.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 09:10:22 by gstrauss          #+#    #+#             */
/*   Updated: 2019/08/29 09:12:16 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstcheck(t_list *lista, t_list *listb)
{
	while (!listb && lista->next && ft_atoi((char *)lista->content)\
			< ft_atoi((char *)lista->next->content))
		lista = lista->next;
	if (!lista->next)
		printf("OK");
	if (lista->next)
		printf("KO");
	return ;
}
