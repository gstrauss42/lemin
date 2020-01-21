#include "libft/libft.h"
#include "include.h"

void    path_branch(char ****complete_paths, char ****incomplete_paths, data_val *data)
{
    char **connectors;
// write incomplete check
    if(incomplete_check(incomplete_paths, complete_paths, data) == 1)
    {
        connectors = find_all((*incomplete_paths)[0], data);
        ft_dupadd(incomplete_paths, connectors);
    }
    // write transfer
    else
        transfer(complete_paths, incomplete_paths);
}

char    **find_all(char **incomplete_paths, data_val *data)
{
    char **connectors;
    int i = 0;
    int a = 0;
    while(incomplete_paths[a])
        a++;
    while(data->links[i])
    {
        config(data->links[i], incomplete_paths, &connectors, incomplete_paths[a]);
        i++;
    }
}

void    config(char *link, char **incomplete_paths, char ***connectors, char *last)
{
    int i = 0;
    
    if(ft_strstr(link, last) != NULL)
    {
        char *node = other_room(link, last);    
        while(ft_strcmp(incomplete_paths[i] && node) != 0)
            i++;
        if(incomplete_paths[i])
            return;
        else
            ft_memcpy(connectors[strlen(connectors)], node);
    }
}