/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nodemake.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 06:51:20 by gstrauss          #+#    #+#             */
/*   Updated: 2019/09/04 10:57:10 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "include.h"

p_list	*ft_nodemake(char *str)
{
	p_list *ret;
	
	ret = (p_list *)malloc(sizeof(p_list *));
	ret->name = ft_strndup(str, ' ');
	ret->links = (p_list **)malloc(sizeof(p_list **));
	return (ret);
}
