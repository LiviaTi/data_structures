#ifndef	LIST_H
# define LIST_H

#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
	int				data;
	struct s_list 	*next;
}					t_list;

void	ft_print_node(t_list *list);
void	ft_insert_node(int x, t_list **list);
void	ft_insert_node_last(int x, t_list **list);
void	ft_insert_at_index(int x, t_list **list, int index);

#endif