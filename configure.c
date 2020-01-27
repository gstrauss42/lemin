#include "libft/libft.h"
#include "include.h"

#include <stdio.h>

data_val    *configure(void)
{
    data_val *ret;

    ret = NULL;
    ret = data_val_mem(ret);
    ret = room_insert(ret);
    ret = link_insert(ret);
    return(ret);
}