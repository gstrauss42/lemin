#include "libft/libft.h"
#include "include.h"

char    **pathfinder(data_val *data)
{
    int     i;
    int     count;
    char    ***todo;
    char    **paths;
    char    **ret;

    i       = 0;
    count   = 0;
    paths   = (char **)malloc(10000);
    todo   = (char **)malloc(1000);
    ret     = (char ***)malloc(1000);

    // path gen then path select


    ft_addend(todo[0], data->start);

    // gen new path for all next nodes that arent already in each path 

    // write algorithm to gen an array of all possible paths
    // write all paths to not include a duplicate string
    
    while(/* while unmapped paths exist */) 
    {
        // find an incomplete path
        // ft_addend(todo[0], data->start);
        
        while(data->links[i]) // add all possible path variations to that path variation
        {
            // if path had end added remove path from list and move to ret
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