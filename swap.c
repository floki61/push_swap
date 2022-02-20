#include "push_swap.h"

void    sa(struct node** a,char *str)
{
	int swap;

	if (!(*a) || !(*a)->next)
		return ;

	swap = (*a)->data;
	(*a)->data = (*a)->next->data;
	(*a)->next->data = swap;
	write(1, str, 3);
	write(1, "\n", 1);
}

void    sb(struct node** b)
{
	int swap;

	if (!(*b) || !(*b)->next)
		return ;

	swap = (*b)->data;
	(*b)->data = (*b)->next->data;
	(*b)->next->data = swap;
	write(1, "sb\n",3);
}
void	ss(struct node** stack_a,struct node** stack_b)
{
	sa(stack_a,"sa");
	sb(stack_b);
	write(1, "ss\n",3);
}
