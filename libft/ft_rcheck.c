/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rcheck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 11:35:26 by gstrauss          #+#    #+#             */
/*   Updated: 2019/08/30 13:06:47 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_rcheck(t_list *tmp)
{
	while (tmp->next && tmp->fpos < tmp->next->fpos)
		tmp = tmp->next;
	if (!tmp->next)
		return (0);
	else
		return (1);
}
