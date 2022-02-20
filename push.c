#include "push_swap.h"

void	pb(struct node** a, struct node** b)
{
	struct node	*tmp;

	if (!*a)
		return ;
	tmp = *a;
	*a = (*a)->next;
	tmp->next = *b;
	*b = tmp;
	write(1, "pb\n",3);
}
void	pa(struct node** a, struct node** b)
{
	struct node	*tmp;

	if (!*b)
		return ;
	tmp = *b;
	*b = (*b)->next;
	tmp->next = *a;
	*a = tmp;
	write(1, "pa\n",3);
}
