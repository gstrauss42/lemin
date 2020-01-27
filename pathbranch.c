#include "libft/libft.h"
#include "include.h"

// calling the nice function in linux adjusts your processor priority number

char    **incomplete_check(char **incomplete_paths, data_val *data);
char    **find_all(char **incomplete_paths, data_val *data);
void    transfer(char ****complete_paths, char ****incomplete_paths);
void    config(char *link, char **incomplete_paths, char ***connectors, char *last);

void    path_branch(char ****complete_paths, char ****incomplete_paths, data_val *data)
{
    char **connectors;
// write incomplete check
    if((connectors = incomplete_check((*incomplete_paths)[0], data)) != NULL)
        ft_dupadd(incomplete_paths, connectors);
    // write transfer
    else
        transfer(complete_paths, incomplete_paths);
}

//void    transfer(char ****complete_paths, char ****incomplete_paths)
//{
    // write a move funtion to put the first path of incomplete_paths onto complete_paths
//}

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
    // might be entirely the wrong return just stuck it in
    return(connectors);
}


void    config(char *link, char **incomplete_paths, char ***connectors, char *last)
{
    int i = 0;
    
    if(ft_strstr(link, last) != NULL)
    {
            // write the other_room function
        //char *node = other_room(link, last);
        // replace node with  the actual node value, node is a placeholder concept
        while(ft_strcmp(incomplete_paths[i], node) != 0)
            i++;
        if(incomplete_paths[i])
            return;
        else
        // might need to remove the above * before connectors put it in there to make it compile the same goes for both stars located before connectors in the ft_strlen index of the previous connectors
            *connectors[strlen(**connectors)] = ft_strdup(node);
    }
}


// checks to make sure that the present top path is still unfinished
char    **incomplete_check(char **incomplete_paths, data_val *data)
{
    int i = 0;
    int p = 0;
    char **connectors;
    // checks if end is the last node of the current path

// ensure that the index is correct for ft_strlen(incomplete_paths[0]) as I just guessed
    if(ft_strcmp(incomplete_paths[ft_strlen(incomplete_paths[0])], data->end) == 0)
        return(0);
    connectors = find_all(incomplete_paths, data);
    while(connectors[i])
    {
        while(incomplete_paths[p])
        {
            if(ft_strcmp(incomplete_paths[p], connectors[i]) == 0)
            {
                p = -1;
                break;
            }
        }
        if(p >= 0)
        {
            return(connectors);
        }
        else
        {
            p = 0;
            i++;
        }
    }
}