#include "libft/libft.h"
#include "include.h"

int maxlen_i(root_struct *start);
int maxlen_p(root_struct *start, int i);

void    execute(char ***paths)
{
    int i;
    int p;
    root_struct *start;
    
    start = NULL;
    i = 0;
    p = 0;
    start = ft_assign_to_struct(paths);
//    while(/*ant_check() == 1*/) // write function to check for ants still in the maze returns the moment one is found that isnt at the end
    // {
    // rather write secure moving rather than ant check run policy
        while(i >= 0)
        {
            while(i >= 0 && p >= 0)
            {
                if(start->links[i][p].ant != 0 && &start->links[i][p + 1] != NULL)
                {
                    start->links[i][p + 1].ant = 1;
                    start->links[i][p].ant = 0;
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
//    }
}

int maxlen_i(root_struct *start)
{
    int i;

    i = 0;
    while(start->links[i])
        i++;
    return(i);
}

int maxlen_p(root_struct *start, int i)
{
    int p;

    p = 0;
    while(&(start->links[i][p]))
        p++;
    return(p);
}