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
        

typedef struct info
{
    char        *room;
    int         ant;
}              path;

typedef struct random
{
    char        *start;
    int         ant;
    struct info **links;
}              root_struct;

void        ft_dupadd(char ****paths, char **connectors);
void        execute(char ***paths);
char        ***pathfinder(data_val *data);
char        **ft_addend(char ** path, char *string);
data_val    *link_insert(data_val *ret);
data_val    *data_val_mem(data_val *ret);
data_val    *configure(void);
data_val    *room_insert(data_val *ret);
char        **pather(char **path, char *point);
void        path_branch(char ****complete_paths, char ****incomplete_paths, data_val *data);
root_struct *ft_assign_to_struct(char ***paths);

#endif