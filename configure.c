#include "libft/libft.h"
#include "include.h"

#include <stdio.h>

data_val    *configure(void)
{
    data_val *ret;

    ret = NULL;
    ret = data_val_mem(ret);
    printf("ants: %d\n", ret->ants);
    ret = room_insert(ret);
    ret = link_insert(ret);

    // testing
    int test = 0;

    printf("start: %s\n", ret->start);
    printf("end:   %s\n", ret->end);

    while(ret->rooms[test])
    {
        printf("rooms: %s\n", ret->rooms[test]);
        test++;
    }
    test = 0;
    while(ret->links[test])
    {
        printf("links: %s\n", ret->links[test]);
        test++;
    }
    return(ret);
}