/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_assign.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 10:28:37 by gstrauss          #+#    #+#             */
/*   Updated: 2019/09/04 10:56:59 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.h"
#include "../libft/libft.h"

void	ft_assign(char ***positions, char ***links, char **argv)
{
	int i;
	int pos;
	int lin;

	pos = 0;
	lin = 0;
	i = 0;
	while(argv[i] && ft_strcmp(argv[i], "##start") != 0)
		i++;
	i++;
	(*positions)[pos] = ft_strdup(argv[i]);
	pos++;
	argv[i][0] = '#';
	i = 0;
	while(argv[i])
	{
		if(ft_strchr(argv[i], '-') != NULL)
		{
			(*links)[lin] = ft_strdup(argv[i]);
			lin++;
		}
		else if(ft_strchr(argv[i], '#') == NULL)
		{
			(*positions)[pos] = ft_strdup(argv[i]);
			pos++;
		}
		i++;
	}
}
