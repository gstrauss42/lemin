#include "libft/libft.h"
#include "include.h"

void    execute(char ***paths, data_val *data)
{
    int i;
    int p;
    root_struct start;
    // assign char **paths to path struct to build the navigatable data structure
    i = 0;
    p = 0;
    start = ft_assign_to_struct(paths);
    while(/*ant_check() == 1*/) // write function to check for ants still in the maze returns the moment one is found that isnt at the end
    {
        while(i >= 0)
        {
            while(i >= 0 && p >= 0)
            {
                if(start[i][p]->ant != 0 && start[i][p + 1])
                {
                    start[i][p + 1] = 1;
                    start[i][p] = 0;
                    // do the movement priting
                    printf("did the things\n");
                }
                p--;
            }
            i--;
            p = maxlen_p(start, i);
        }   
        i = maxlen_i(start);
        p = maxlen_p(start, i);
    }
    // move backwards through the paths to move ants until only end contains ants
}

int maxlen_i(root_struct start)
{
    int i;

    i = 0;
    while(start->links[i])
        i++;
    return(i);
}

int maxlen_p(root_struct start, int i)
{
    int p;

    p = 0;
    while(start->links[i][p])
        p++;
    return(p);
}