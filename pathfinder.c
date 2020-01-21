#include "libft/libft.h"
#include "include.h"

char    ***path_finder(char ***incomplete_paths, data_val *data);

char    ***pathfinder(data_val *data)
{
    char    ***incomplete_paths;
    char    ***paths;

    paths = path_finder(incomplete_paths, data);
    // write pathselector
    return(pathselector(paths));
}

// dont fall for it... this function is differant to the above one

char    ***path_finder(char ***incomplete_paths, data_val *data)
{
    int     i;
    char    ***complete_paths;

    i = 0;
    ft_addend(incomplete_paths[0], data->start);
    while(incomplete_paths[0])
    {
        // present point
        path_branch(&complete_paths, &incomplete_paths, data);
    }
    return(complete_paths);
}