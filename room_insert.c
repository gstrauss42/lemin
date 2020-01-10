#include "libft/libft.h"

data_val    *room_insert(data_val *ret)
{
    char    *line;
    int     count;

    count = 0;
    while(get_next_line(1, &line) != 0)
    {
        if(strchr(line, "##start") != NULL)
        {
            ft_strdel(&line);
            get_next_line(1, &line);
            ret->start = ft_strnew(line);
        }
        else if(strchr(line, "##end") != NULL)
        {
            ft_strdel(&line);
            get_next_line(1, &line);
            ret->end = ft_strnew(line);
            ft_strdel(&line);
            break();
        }
        else
        {
            ret->rooms[count] = ft_strnew(line);
            count++;
        }
        ft_strdel(&line);
    }
    return(ret);
}