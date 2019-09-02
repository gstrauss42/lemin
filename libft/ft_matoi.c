/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matoi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 15:09:45 by gstrauss          #+#    #+#             */
/*   Updated: 2019/07/11 09:29:27 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		**ft_matoi(char **input)
{
	int i;
	int **used;

	i = 0;
	used = (int **)malloc(sizeof(input));
	while (input[i])
	{
		used[i][0] = ft_atoi(input[i]);
		i++;
	}
	return (used);
}
