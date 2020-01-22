#include "libft/libft.h"
#include "include.h"

root_struct   ft_assign_to_struct(char ***paths)
{
    root_struct start;
    int i;
    int p;

    i = 0;
    p = 0;
    complete_paths =(path)malloc(ft_strlen(paths) * sizeof(path));
    while(paths[i])
    {
        while(paths[i][p])
        {
            start->links[i][p] = new_struct(start, paths, i , p);
            p++;
        }
        p = 0;
        i++;
    }
    return(start);
}

struct info new_struct(struct info start, char ***paths, int i, int p)
{
    path new_path;
    new_path = (path)malloc((sizeof(path *) + 1));
    new_path->room = ft_strdup(paths[i][p]);
    new_path->ant = 0;
}