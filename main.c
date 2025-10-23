#include "includes/linked_list.h"

/*
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
*/

int main()
{
    t_list *list = NULL;

    // Inserir alguns elementos
    ft_insert_at_index(10, &list, 1); // insere no início
    ft_insert_at_index(20, &list, 2); // insere no final
    ft_insert_at_index(15, &list, 2); // insere no meio
    ft_insert_at_index(5,  &list, 1); // insere no início
    ft_insert_at_index(25, &list, 5); // insere no final

    // Imprimir lista
    printf("Lista atual: ");
    ft_print_node(list);  // função que imprime toda a lista

    return 0;
}