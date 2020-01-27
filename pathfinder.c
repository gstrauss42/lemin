#include "libft/libft.h"
#include "include.h"

char    ***path_finder(char ***incomplete_paths, data_val *data);
char    ***pathselector(char ***paths, data_val *data);

char    ***pathfinder(data_val *data)
{
    char    ***incomplete_paths;
    char    ***paths;

    incomplete_paths = NULL;
    paths = path_finder(incomplete_paths, data);
    // write pathselector
    return(pathselector(paths, data));
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

char **path_dup(char **path)
{
    char **ret;
    int i;

    i = 0;
    ret = (char **)malloc(sizeof(char **));
    while(path[i])
    {
        ret[i] = ft_strdup(path[i]);
        i++;
    }
    ret[i] = NULL;
    return(ret);
}

char ***pathselector(char ***paths, data_val *data)
{
    char ***ret = NULL;
    int i;
    int p;
    int startcheck;
    int endcheck;
    int count;

    p = 0;
    count = 0;
    i = 0;
    while(paths[i])
    {
        while(paths[i][p])
        {
            // do correct start and end case checks
            if(strcmp(paths[i][p], data->start) == 0)
            {
                startcheck = 1;
            }
            if(strcmp(paths[i][p], data->end) == 0)
            {
                endcheck = 1;
            }
            p++;
        }
        if(startcheck == 1 && endcheck == 1)
        {
            ret[count] = path_dup(paths[i]);
            count++;
        }
        p = 0;
        i++;
        startcheck = 0;
        endcheck = 0;
    }
    return(ret);
}