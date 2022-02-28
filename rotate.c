#include "push_swap.h"

void rra(struct node** stack)
{
	if (!(*stack) || !(*stack)->next)
		return ;
	struct node *tmp = *stack;
	struct node* prev;
	struct node* newnode = malloc(sizeof(struct node));
	while(tmp->next != NULL)
	{
		prev = tmp;
		tmp = tmp->next;
	}
	prev->next = NULL;
	newnode->data = tmp->data;
	free(tmp);
	newnode->next = *stack;
	*stack = newnode;
	write(1, "rra\n",4);
}

void ra(struct node** stack)
{
	struct node	*tmp;
	struct node	*head;

	if (!*stack || !(*stack)->next)
		return ;
	head = (*stack)->next;
	tmp = *stack;
	ft_lstlast(tmp)->next = *stack;
	(*stack)->next = NULL;
	*stack = head;
	write(1, "ra\n",3);
}





