#include "libft/libft.h"
#include "include.h"

int main(void)
{
    char        ***paths;
    data_val    *data;

    data = configure(); // tick
    paths = pathfinder(data);
    execute(paths, data);
    printf("finished\n");
    return(0);
}