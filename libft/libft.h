/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 10:39:13 by gstrauss          #+#    #+#             */
/*   Updated: 2019/08/30 13:42:43 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdbool.h>
# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# define BUFF_SIZE 4

typedef struct	s_list
{
	char			*content;
	size_t			content_size;
	struct s_list	*next;
	int				fpos;
}				t_list;

void			perform(t_list **lista, t_list **listb, t_list *node);
void			algo(t_list **lista, t_list **listb);
int				ft_rcheck(t_list *tmp);
void			ft_lstoutput(t_list **lista, t_list **listb);
void			ft_short_sort(t_list **lista, t_list **listb, int i);
void			ft_lstcheck(t_list *lista, t_list *listb);
int				ft_isgreater(t_list *listb, t_list *node);
void			ft_reorder(t_list **listb);
t_list			*ft_lstvalmake(t_list **head, char *input, int value);
void			ft_sa(t_list **lista);
void			ft_sb(t_list **listb);
void			ft_pb(t_list **lista, t_list **listb);
void			ft_rb(t_list **listb);
void			ft_rrb(t_list **listb);
void			ft_rra(t_list **lista);
void			ft_ra(t_list **lista);
void			ft_pa(t_list **lista, t_list **listb);

int				ft_strnlen(char *str, char c);
char			*ft_strnjoin(char *s1, char *s2, char c);
char			*ft_stranjoin(char *s1, char *s2, char c);
char			*ft_strcut(char *s, char c);
char			*ft_strandup(char *str, char c);
char			*ft_strndup(char *str, char c);

int				ft_posdif(t_list *head, t_list *check);
t_list			*ft_lstlast(t_list *head);
t_list			*ft_lstdup(t_list *head);
int				ft_isint(char *str);
int				get_next_line(const int fd, char **line);
t_list			*ft_newlstl(int len);
int				ft_lstlen(t_list *head);
void			ft_del(void *s, size_t n);
t_list			*ft_pop(t_list **head, int num);
int				ft_lstplen(t_list *head, t_list *node);
t_list			*ft_lstezmake(t_list **head, char *input);
void			ft_lstend(t_list *head, t_list *new);
t_list			*ft_lstmake(char **input);
int				**ft_matoi(char **input);
t_list			*ft_lstmap(t_list *lst, t_list *(*f) (t_list *elem));
void			ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void			ft_lstadd(t_list **alst, t_list *new);
void			ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void			ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
t_list			*ft_lstnew(void const *content, size_t content_size);
int				ft_atoi(const char *str);
void			ft_bzero(void *s, size_t n);
char			*ft_itoa(int n);
char			*ft_strncat(char *s1, const char *s2, size_t n);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
void			ft_putstr(char const *s);
int				ft_isdigit(int c);
int				ft_isprint(int c);
void			*ft_memalloc(size_t size);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
void			*ft_memset(void *b, int c, size_t len);
char			*ft_strcat(char *s1, const char *s2);
char			*ft_strchr(const char *s, int c);
int				ft_strcmp(const char *s1, const char *s2);
char			*ft_strcpy(char *dst, const char *src);
char			*ft_strdup(const char *str);
size_t			ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t			ft_strlen(char const *a);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char			*ft_strncpy(char *dst, const char *src, size_t len);
char			*ft_strnstr(const char *haystack,
		const char *needle, size_t len);
char			*ft_strrchr(const char *s, int c);
char			*ft_strstr(const char *haystack, const char *needle);
int				ft_tolower(int c);
int				ft_toupper(int c);
void			*ft_memalloc(size_t size);
void			ft_memdel(void **ap);
char			*ft_strnew(size_t size);
void			ft_strdel(char **as);
void			ft_strclr(char *s);
void			ft_striter(char *s, void (*f)(char *));
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
char			*ft_strmap(char const *s, char (*f)(char));
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int				ft_strequ(char const *s1, char const *s2);
int				ft_strnequ(char const *s1, char const *s2, size_t n);
char			*ft_strsub(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s);
char			**ft_strsplit(char const *s, char c);
char			*ft_itoa(int n);
void			ft_putchar(char c);
void			ft_putendl(char const *s);
void			ft_putnbr(int n);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char const *s, int fd);
void			ft_putendl_fd(char const *s, int fd);
void			ft_putnbr_fd(int n, int fd);
#endif
