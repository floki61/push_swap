#include "push_swap.h"

int	position(struct node *stack, int *i, int pos)
{
	int	len;
	len = lent_stack(stack);
	*i = 0;
	if (pos <= len / 2)
	{
		*i = pos - 1;
		return (1);
	}
	else
	{
		*i = len - pos + 1;
		return (0);
	}
}
int	lent_stack(struct   node  *stack)
{
	int		i;
	struct node	*tmp;

	tmp = stack;
	i = 0;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}
  void  trtib(struct node **a)
  {
	int pos;
	int i;
	int d;

	i = 0;
	pos = check_min(*a);
	d = position(*a,&i,pos);
	if(d == 1)
	{
		while(i-- > 0)
			ra(a);
	}
	else
	{
		while(i-- > 0)
			rra(a);
	}
}
int    check_end(struct node **stack)
{
	struct node *tmp;
	tmp = *stack;
	while(tmp->next)
	{
		tmp = tmp->next;
	}
	return(tmp->data);
}
int nearest_num(struct node **a,struct node **b)
{
	struct node *tmp;
	int i;
	int a1;
	int j;
	int pos;

	tmp = *a;
	i = 2147483647;
	pos = 1;

	while(tmp)
	{
		a1 = tmp->data - (*b)->data;
		if(tmp->data > (*b)->data && i > a1)
		{
			i = a1;
			j = tmp->data;     
		}
		tmp = tmp->next;
	}
	tmp = *a;
	while(tmp->data != j)
	{
		pos++;
		tmp = tmp->next;
	}
	return(pos);
}
int    check_min_value(struct node   *stack)
{
	struct node *tmp;
	int i;
	int pos;

	i = stack->value;
	tmp = stack;
	pos = 1;
	while(tmp)
	{
		if(i > tmp->value)
			i = tmp->value;
		tmp = tmp->next;
	}
	tmp = stack;
	while(tmp)
	{
		if (tmp->value == i)
			return (pos);
		tmp = tmp->next;
		pos++;
	}
	return(0);   
}
int    move_num(struct node **a,struct node **b)
{
	int move;
	int d;
	int i;
	int nearset;
	struct node *tmp;

	tmp = (*b);
	move = 0;
	nearset = nearest_num(a,&tmp);
	d = position(*a,&i,nearset);
	if(d == 1)
	{
		while(i-- > 0)
			 move++;
	}
	else
	{
		while(i-- > 0)
			 move++;
	}
	return (move);
}
void    print_stack(struct node *a)
{
	while(a != NULL)
	{
		printf("%d\n",a->data);
		a = a->next;
	}
}
void printf_value(struct node *stack)
{
	while(stack != NULL)
	{
		printf("%d\n",stack->value);
		stack = stack->next;
	}
}
void    value(struct node *a,struct node *b)
{
	struct node *b1;
	int i;

	b1 = b;
	i = 1;

	while(b1)
	{
		if(i <= lent_stack(b) / 2)
			b1->value = move_num(&a,&b1) + (i -1);
			
		else
			b1->value = move_num(&a,&b1) + (lent_stack(b) - i +1);
		 b1 = b1->next;
		i++;
	}
}
void sorted(int index,int	i,struct node **stack)
{
	if(index == 1)
	{
		while(i-- > 0)
			ra(stack);
	}
	else
	{
		while(i-- > 0)
		{
			// printf(">>>> %d\n", (*stack)->next->data);
			rra(stack);
		}
	}
}

