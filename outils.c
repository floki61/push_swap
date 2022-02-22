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