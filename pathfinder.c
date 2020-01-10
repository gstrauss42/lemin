#include "libft/libft.h"
#include "include.h"

char    **pathfinder(data_val *data)
{
    int i;
    int count;
    char **todo;
    char ***paths;

    i = 0;
    count = 0;
    paths = (char **)malloc(10000);
    
    // path gen then path select

    todo[0] = ft_strdup(data->start);

    // write algorithm to gen an array of all possible paths
    // write all paths to not include a duplicate string
    while(todo[0])
    {
        while(todo[count])
        {
            paths
        }
    }

    count = 0;
    // remove all paths that dont include or end on end 
    while(paths[count])
    {
        while(paths[count][i])
        {
            if(paths[count][i]) //if path[count] doesnt include an end var remove the count index
            i++;

        }
    }
    while()
}