#include "push_swap.h"

void rra(struct node** stack)
{
	struct node *tmp = *stack;
	struct node* prev;
	struct node* newnode = malloc(sizeof(struct node));
	while(tmp->next != NULL)
	{
		prev = tmp;
		tmp = tmp->next;
	}
	prev->next = tmp->next;
	newnode->data = tmp->data;
	free(tmp);
	newnode->next = *stack;
	*stack = newnode;
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
}





