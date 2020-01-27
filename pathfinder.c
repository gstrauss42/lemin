#include "libft/libft.h"
#include "include.h"

char    ***path_finder(char ***incomplete_paths, data_val *data);
char    ***pathselector(char ***paths);

char    ***pathfinder(data_val *data)
{
    char    ***incomplete_paths;
    char    ***paths;

    // might need to be initialiased with a first value
    incomplete_paths = NULL;

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
        path_branch(&complete_paths, &incomplete_paths, data);
    }
    return(complete_paths);
}

char ***pathselector(char ***paths)
{
    char ***ret = NULL;

    while(paths)
    {
    // choose all correct paths and then put those into ret to return to be used all the way up in main
    }
    return(ret);
}