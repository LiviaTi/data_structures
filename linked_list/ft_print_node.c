#include "../includes/linked_list.h"

void	ft_print_node(t_list *list)
{
	printf("\n List is: ");
	while(list)
	{
		printf("%d", list->data);
		list = list->next;
	}
	printf ("\n");
}