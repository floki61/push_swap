/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   outils.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-berh <oel-berh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 15:31:00 by oel-berh          #+#    #+#             */
/*   Updated: 2022/03/06 22:53:15 by oel-berh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	position(t_node *stack, int *i, int pos)
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

int	lent_stack(t_node *stack)
{
	int		i;
	t_node	*tmp;

	tmp = stack;
	i = 0;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

void	roue(t_node **a)
{
	int	pos;
	int	i;
	int	d;

	i = 0;
	pos = check_min(*a);
	d = position(*a, &i, pos);
	if (d == 1)
	{
		while (i-- > 0)
			ra (a);
	}
	else
	{
		while (i-- > 0)
			rra (a);
	}
}

int	nearest_num(t_node **a, t_node **b)
{
	t_node	*tmp;
	int		i;
	int		a1;
	int		j;
	int		pos;

	tmp = *a;
	i = 2147483647;
	pos = 1;
	while (tmp)
	{
		a1 = tmp->data - (*b)->data;
		if (tmp->data > (*b)->data && i > a1)
		{
			i = a1;
			j = tmp->data;
		}
		tmp = tmp->next;
	}
	return (pos_nearest_num(a, j));
}

int	pos_nearest_num(t_node	**a, int j)
{
	t_node	*tmp;
	int		pos;

	tmp = *a;
	pos = 1;
	while (tmp->data != j)
	{
		pos++;
		tmp = tmp->next;
	}
	return (pos);
}
// int    check_end(t_node **stack)
// {
// 	t_node *tmp;
// 	tmp = *stack;
// 	while(tmp->next)
// 	{
// 		tmp = tmp->next;
// 	}
// 	return(tmp->data);
// }

void	print_stack(t_node *a)
{
	while (a != NULL)
	{
		printf ("%d\n", a->data);
		a = a->next;
	}
}

// void printf_value(t_node *stack)
// {
// 	while(stack != NULL)
// 	{
// 		printf("%d\n",stack->value);
// 		stack = stack->next;
// 	}
// }
