/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strandup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 14:27:36 by gstrauss          #+#    #+#             */
/*   Updated: 2019/07/15 15:59:54 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strandup(char *str, char c)
{
	int		i;
	int		p;
	int		z;
	char	*ret;

	z = 0;
	p = ft_strnlen(str, c);
	ret = (char *)malloc(ft_strlen(str) - p + 1);
	i = 0;
	while (i < p)
		i++;
	if (str[i] == c)
		i++;
	while (str[i])
		ret[z++] = str[i++];
	ret[z] = '\0';
	return (ret);
}
