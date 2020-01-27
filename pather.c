#include "libft/libft.h"
#include "include.h"

char    **pather(char **path, char *point)
{
    int count;

    count = 0;
    while(path[count] && strcmp(path[count], point) == 0)
    {
        count++;
    }
    if(!path[count])
    {
        path[count] = strdup(point);
    }
    return(path);
}