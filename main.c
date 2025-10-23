#include "includes/linked_list.h"

int main()
{
	t_list	*list;

	list = NULL;
	printf("How many numbers: \n");
	int n, i, x;
	scanf("%d",&n);
	i = 0;
	while (i < n)
	{
		printf("Enter the number \n");
		scanf("%d", &x);
		ft_insert_node_last(x, &list);
		//ft_insert_node(x, &list);
		ft_print_node(list);
		i++;
	}
	return (0);
}