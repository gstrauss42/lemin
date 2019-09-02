/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pop.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 10:35:09 by gstrauss          #+#    #+#             */
/*   Updated: 2019/09/02 10:59:09 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ret1(t_list *ret, t_list *tmp, t_list **head);
t_list	*spacesaver(t_list *tmp, t_list *ret, t_list *bfor, int i, t_list **head);

t_list	*ft_pop(t_list **head, int num)
{
	int		i;
	t_list	*ret;
	t_list	*tmp;
	t_list	*bfor;

	tmp = *head;
	ret = NULL;
	i = 1;
	if (num == 1)
		return (ret1(ret, tmp, head));
	while (true)
	{
		bfor = tmp;
		if (tmp->next)
			tmp = tmp->next;
		else
			break ;
		i++;
		if (i == num)
			break ;
	}
	if (i != num)
		return (NULL);
	return (spacesaver(tmp, ret, bfor, i, head));
}

t_list	*ret1(t_list *ret, t_list *tmp, t_list **head)
{
	ret = ft_lstnew((char *)tmp->content, tmp->content_size);
	ret->fpos = (*head)->fpos;
	if (tmp->next)
	{
		*head = tmp->next;
		ft_lstdelone(&tmp, ft_del);
	}
	else
	{
		ret = ft_lstnew((char *)tmp->content, tmp->content_size);
		ft_lstdel(head, ft_del);
	}
	return (ret);
}

t_list	*spacesaver(t_list *tmp, t_list *ret, t_list *bfor, int i, t_list **head)
{
	i = tmp->fpos;
	ret = ft_lstnew((char*)tmp->content, tmp->content_size);
	if (tmp->next)
		bfor->next = tmp->next;
	else
		bfor->next = NULL;
	ret->fpos = i;
	if(!(*head)->next)
		ft_lstdel(head, ft_del);
/*	else
		ft_lstdel(head, ft_del);*/
	return (ret);
}
