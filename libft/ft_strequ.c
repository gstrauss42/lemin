/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 12:42:23 by gstrauss          #+#    #+#             */
/*   Updated: 2019/06/13 08:05:03 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strequ(char const *s1, char const *s2)
{
	int	i;

	i = 0;
	if ((!s2 && s1) || (!s1 && s2) || (!s1 && !s2))
		return (0);
	while (s1[i] == s2[i])
	{
		if ((s1[i] && s2[i]) == '\0')
			return (1);
		i++;
	}
	return (0);
}