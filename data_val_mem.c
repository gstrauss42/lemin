#include "libft/libft.h"

data_val *data_val_mem(data_val *ret)
{
    char *line;

    get_next_line(1, &line); 
    ret         = (data_val *)malloc(100);
    ret->start  = (char *)malloc(128);
    ret->end    = (char *)malloc(128);
    ret->links  = (char *)malloc(1000);
    ret->rooms  = (char *)malloc(1000);
    ret->ants   = (int)malloc(16);
    ret->ants   = ft_atoi(*line);
    return(ret);
}