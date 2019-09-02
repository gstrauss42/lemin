/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_posdif.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 13:24:10 by gstrauss          #+#    #+#             */
/*   Updated: 2019/08/29 09:06:46 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_extra(t_list *head, t_list *tmp, int val, t_list *hold);

int			ft_posdif(t_list *head, t_list *check)
{
	t_list	*tmp;
	t_list	*ttmp;
	t_list	*hold;
	int		val;

	ttmp = head;
	hold = head;
	val = 1000000;
	while (head->fpos && check)
	{
		if (head->fpos > check->fpos && head->fpos < val)
		{
			tmp = head;
			val = head->fpos;
		}
		if (head->fpos > hold->fpos)
			hold = head;
		if (head->next)
			head = head->next;
		else
			break ;
	}
	head = ttmp;
	return (ft_extra(head, tmp, val, hold));
}

static int	ft_extra(t_list *head, t_list *tmp, int val, t_list *hold)
{
	int i;

	i = 0;
	if (val == 1000000)
	{
		while (head != hold)
		{
			head = head->next;
			i++;
		}
	}
	else
	{
		while (head != tmp)
		{
			head = head->next;
			i++;
		}
	}
	return (i);
}
