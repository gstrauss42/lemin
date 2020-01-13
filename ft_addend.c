#include "include.h"
#include "libft/libft.h"

char    **ft_addend(char ** path, char *string)
{
    int i;
    int p;
    
    i = 0;
    p = 0;
    while(path[i])
    {
        i++;
    }
    path[i] = (char *)malloc( (ft_strlen(string) + 1) * sizeof(char *));
    while(string[p])
    {
        path[i][p] = string[p];
        p++;
    }
    path[i][p] = '\0';
    return(path);
}