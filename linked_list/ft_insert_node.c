#include "../includes/linked_list.h"

void	ft_insert_node(int x, t_list **list)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return ;
	new_node->data = x;
	new_node->next = NULL;
	if (*list != NULL)
		new_node->next = *list;
	*list = new_node;
}