/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 12:43:17 by gstrauss          #+#    #+#             */
/*   Updated: 2019/07/15 10:57:48 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnjoin(char *s1, char *s2, char c)
{
	int		i;
	int		o;
	char	*ret;

	i = 0;
	o = 0;
	if (s2 && s2[0])
		o = ft_strnlen(s2, c);
	if (s1 && s1[0])
		i = ft_strnlen(s1, c);
	ret = (char *)malloc(o + i + 1);
	if (!ret)
		return (NULL);
	i = 0;
	o = 0;
	while (s1 && s1[i] != '\0' && s1[i] != c)
	{
		ret[i] = s1[i];
		i++;
	}
	while (s2 && s2[o] != '\0' && s2[o] != c)
		ret[i++] = s2[o++];
	ret[i] = '\0';
	return (ret);
}
