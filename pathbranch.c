#include "libft/libft.h"
#include "include.h"

void    path_branch(char ****complete_paths, char ****incomplete_paths, data_val *data)
{
    char *connectors;

    if(incomplete_check(incomplete_paths, complete_paths, data) == 1)
    {
        connectors = find_all((*incomplete_paths)[0], data);
        while(connectors[0])
        {
            ft_dupadd(incomplete_paths, connectors[0]);
            ft_pop(connectors[0]);
        }
    }
}