/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   outils_lll.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-berh <oel-berh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 16:04:34 by oel-berh          #+#    #+#             */
/*   Updated: 2022/03/06 19:20:54 by oel-berh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_min_value(t_node *stack)
{
	t_node	*tmp;
	int		i;
	int		pos;

	i = stack->value;
	tmp = stack;
	pos = 1;
	while (tmp)
	{
		if (i > tmp->value)
			i = tmp->value;
		tmp = tmp->next;
	}
	tmp = stack;
	while (tmp)
	{
		if (tmp->value == i)
			return (pos);
		tmp = tmp->next;
		pos++;
	}
	return (0);
}

int	move_num(t_node **a, t_node **b)
{
	int			move;
	int			d;
	int			i;
	int			nearset;
	t_node		*tmp;

	tmp = (*b);
	move = 0;
	nearset = nearest_num (a, &tmp);
	d = position (*a, &i, nearset);
	if (d == 1)
	{
		while (i-- > 0)
			move++;
	}
	else
	{
		while (i-- > 0)
			move++;
	}
	return (move);
}

void	value(t_node *a, t_node *b)
{
	t_node	*b1;
	int		i;

	b1 = b;
	i = 1;
	while (b1)
	{
		if (i <= lent_stack (b) / 2)
			b1->value = move_num (&a, &b1) + (i -1);
		else
			b1->value = move_num (&a, &b1) + (lent_stack (b) - i +1);
		b1 = b1->next;
		i++;
	}
}

void	sorted(int index, int i, t_node **stack)
{
	if (index == 1)
	{
		while (i-- > 0)
			ra (stack);
	}
	else
	{
		while (i-- > 0)
			rra (stack);
	}
}

void	minmax(t_node **a, t_node **b)
{
	int	lent;
	int	min;
	int	max;
	int	i;

	i = 1;
	lent = lent_stack (*a);
	min = check_min (*a);
	max = check_max (*a);
	while (lent-- > 0)
	{
		if (i == min || i == max)
			ra (a);
		else
			pb (a, b);
		i++;
	}
}
