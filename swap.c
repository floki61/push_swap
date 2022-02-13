#include "push_swap.h"

void    sa(struct node** a)
{
	int swap;

	if (!(*a) || !(*a)->next)
		return ;

	swap = (*a)->data;
	(*a)->data = (*a)->next->data;
	(*a)->next->data = swap;
	// if (print)
	// {
	// 	ft_putstr(print);
	// 	write(1, "\n", 1);
	// }
}

void    sb(struct node** b)
{
	int swap;

	if (!(*b) || !(*b)->next)
		return ;

	swap = (*b)->data;
	(*b)->data = (*b)->next->data;
	(*b)->next->data = swap;
}
void	ss(struct node** stack_a,struct node** stack_b)
{
	sa(stack_a);
	sb(stack_b);
}

int main(int argc,char *argv[])
{
    struct node* head;

    if(argc < 2 || !lineardata_data(argv,&head))
		return (0);
	if(--argc == 3)
		sort_3(&head);
	while(head != NULL)
	{
		printf("%d\n",head->data);
		head = head->next;
	}
	return 0;
}
