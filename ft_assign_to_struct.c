#include "libft/libft.h"
#include "include.h"

struct info *new_struct(char ***paths, int i, int p);

root_struct   *ft_assign_to_struct(char ***paths)
{
    root_struct *start;
    int i;
    int p;

    i = 0;
    p = 0;
    // probs gonna seg fault on line 20 cause of line 15
    start = NULL;
    while(paths[i])
    {
        while(paths[i][p])
        {
            //  put the star in the next line to make it compile at position: *new_struct(...);
            start->links[i][p] = *new_struct(paths, i , p);
            p++;
        }
        p = 0;
        i++;
    }
    return(start);
}

struct info *new_struct(char ***paths, int i, int p)
{
    path *new_path;
    new_path = (struct info*)malloc((sizeof(struct info *) + 1));
    new_path->room = ft_strdup(paths[i][p]);
    new_path->ant = 0;
    return(new_path);
}