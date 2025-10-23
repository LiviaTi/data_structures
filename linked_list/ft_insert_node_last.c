
#include "../includes/linked_list.h"

void	ft_insert_node_last(int x, t_list **list)
{
	t_list	*new_node;
	t_list	*tmp;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return ;
	new_node->data = x;
	new_node->next = NULL;
	if (*list == NULL)
	{
		*list = new_node;
		return ;
	}
	tmp = *list;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new_node;
}