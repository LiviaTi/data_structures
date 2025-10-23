
#include "../includes/linked_list.h"


void	ft_insert_at_index(int x, t_list **list, int index)
{
	t_list *new_node;
	t_list *tmp;
	int i;

	if (index < 1)
		return;
	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return;
	new_node->data = x;
	new_node->next = NULL;

	if (index == 1)
	{
		new_node->next = *list;
		*list = new_node;
		return;
	}
	tmp = *list;
	i = 1;
	while (tmp != NULL && i < index - 1)
	{
		tmp = tmp->next;
		i++;
	}
	if (tmp == NULL)
	{
		free(new_node);
		return;
	}
	new_node->next = tmp->next;
	tmp->next = new_node;
}