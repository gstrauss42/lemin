/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 10:06:16 by gstrauss          #+#    #+#             */
/*   Updated: 2019/06/03 14:09:08 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dst, const char *src)
{
	int i;
	int q;

	i = 0;
	q = 0;
	while (src[q] != '\0')
		q++;
	while (i <= q)
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}