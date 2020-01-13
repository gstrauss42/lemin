#include "libft/libft.h"
#include "include.h"

int main(void)
{
    char        **paths;
    data_val    *data;

    data = configure();
    paths = pathfinder(data);
    // execute(paths, data);
    return(0);
}