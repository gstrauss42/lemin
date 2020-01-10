#ifndef INCLUDE_H
# define INCLUDE_H

typedef struct  a_list
{
    int     ants;
    char    *start;
    char    *end;
    char    **links;
    char    **rooms;
}               data_val;

data_val    *link_insert(data_val *ret);
data_val    *data_val_mem(data_val *ret);
data_val    *configure(void);
data_val    *room_insert(data_val *ret);

#endif