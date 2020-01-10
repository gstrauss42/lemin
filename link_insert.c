#include "libft/libft.h"
#include "include.h"

data_val    *link_insert(data_val *ret)
{
    char    *line;
    int     count;

    count = 0;
    while(get_next_line(1, &line) != 0)
    {
        if(ft_strchr(line, '#') == NULL)
        {
            ret->links[count] = ft_strdup(line);
            count++;
        }
        ft_strdel(&line);
    }
    return(ret);
}