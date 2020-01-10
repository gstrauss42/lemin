#include "libft/libft.h"
#include "include.h"

data_val    *room_insert(data_val *ret)
{
    char    *line;
    int     count;

    count = 0;
    while(get_next_line(1, &line) != 0)
    {
        if(ft_strstr(line, "##start") != NULL)
        {
            ft_strdel(&line);
            get_next_line(1, &line);
            ret->start = ft_strdup(line);
        }
        else if(ft_strstr(line, "##end") != NULL)
        {
            ft_strdel(&line);
            get_next_line(1, &line);
            ret->end = ft_strdup(line);
            ft_strdel(&line);
            break;
        }
        else
        {
            ret->rooms[count] = ft_strdup(line);
            count++;
        }
        ft_strdel(&line);
    }
    return(ret);
}