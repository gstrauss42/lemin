#include "libft/libft.h"
#include "include.h"

void    ft_dupadd(char ****paths, char **connectors)
{
    char **the_path;
    int i = 0;
    
    the_path = /*2D array copy function*/(*paths)[0];
    
    // checking if we can add onto the first path
    while(not_found(the_path, connectors[i] == 0)
        i++;
    if(connectors[i])
        (*paths)[0][ft_strlen((*paths)[0])] = ft_strdup(connectors[i]);
    
    i++;
    // adding all additional routes onto the end of paths
    while(connector[i])
    {
        if(not_found(the_path, connectors[i]))
        {
            // make sure this is the last elem of the correct path n stuff
            (*paths)[0][ft_strlen((*paths)[0])] = ft_strdup(connectors[i]);
        }
        i++;
    }
}

int not_found(char **path, char *connector)
{
    int i;

    i = 0;
    while(ft_strcmp(path[i], connector) != 0)
        i++;
    if(!path[i])
        return(1);
    return(0);
}