#include "libft/libft.h"
#include "include.h"

char    ***path_finder(char ***incomplete_paths, data_val *data);

char    ***pathfinder(data_val *data)
{
    char    ***incomplete_paths;
    char    ***paths;

    paths = path_finder(incomplete_paths, data);
    return(pathselecter(paths));
}

char    ***path_finder(char ***incomplete_paths, data_val *data)
{
    int     i;
    char    ***complete_paths;

    i = 0;
    ft_addend(incomplete_paths[0], data->start);
    while(incomplete_paths[0])
    {
        path_branch(&complete_paths, &incomplete_paths, data);
    }
    return(complete_paths);
}