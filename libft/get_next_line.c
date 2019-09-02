/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 10:52:02 by gstrauss          #+#    #+#             */
/*   Updated: 2019/07/20 07:35:30 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*copy(t_list *head, char *buff, char **line, char **holder)
{
	if (head)
	{
		while (head)
		{
			ft_strcat(buff, head->content);
			if (head->next)
				head = head->next;
			else
				break ;
		}
	}
	buff[ft_strlen(buff) + 1] = '\0';
	*line = ft_strnjoin(*holder, buff, '\n');
	if (*holder)
		ft_strdel(holder);
	return (ft_strandup(buff, '\n'));
}

int		reader(int fd, char **line, char **holder)
{
	char	*buff;
	t_list	*head;
	int		i;
	int		p;

	head = NULL;
	i = 0;
	p = 0;
	buff = ft_memalloc(BUFF_SIZE + 1);
	while ((p = read(fd, buff, BUFF_SIZE)) && p != 0)
	{
		buff[p] = '\0';
		head = ft_lstezmake(&head, buff);
		i = p + i;
		if (ft_strchr(buff, '\n'))
			break ;
	}
	if (buff[0] || (*holder)[0] != '\0')
		p = 1;
	ft_strdel(&buff);
	buff = ft_memalloc(i + 1);
	*holder = copy(head, buff, line, holder);
	ft_lstdel(&head, ft_del);
	ft_strdel(&buff);
	return (p);
}

int		get_next_line(int fd, char **line)
{
	static char	*holder;

	if (!holder)
		holder = ft_memalloc(BUFF_SIZE + 1);
	if (!line || read(fd, NULL, 0) == -1)
		return (-1);
	if (holder && ft_strchr(holder, '\n'))
	{
		*line = ft_strndup(holder, '\n');
		holder = ft_strcut(holder, '\n');
	}
	else
	{
		if (reader(fd, line, &holder) == 0)
			return (0);
	}
	if (!holder[0])
	{
		ft_strdel(&holder);
	}
	return (1);
}
