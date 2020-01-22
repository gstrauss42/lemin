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
                }
                p--;
            }
            i--;
            p = maxlen_p(start, i);
        }   // write these maxlen functions for each movement
        i = maxlen_i(start);
        p = maxlen_p(start, i);
    }
    // move backwards through the paths to move ants until only end contains ants
}