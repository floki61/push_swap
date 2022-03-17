/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_4.c.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-berh <oel-berh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 14:13:33 by oel-berh          #+#    #+#             */
/*   Updated: 2022/03/17 23:08:54 by oel-berh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_min(t_node *stack)
{
	t_node	*tmp;
	int		i;
	int		pos;

	i = stack->data;
	tmp = stack;
	pos = 1;
	while (tmp)
	{
		if (i > tmp->data)
			i = tmp->data;
		tmp = tmp->next;
	}
	tmp = stack;
	while (tmp)
	{
		if (tmp->data == i)
			return (pos);
		tmp = tmp->next;
		pos++;
	}
	return (0);
}

int	check_max(t_node *stack)
{
	t_node	*tmp;
	int		i;
	int		pos;

	i = stack->data;
	tmp = stack;
	pos = 1;
	while (tmp)
	{
		if (i < tmp->data)
			i = tmp->data;
		tmp = tmp->next;
	}
	tmp = stack;
	while (tmp)
	{
		if (tmp->data == i)
			return (pos);
		tmp = tmp->next;
		pos++;
	}
	return (0);
}

int	is_sorted(t_node	*a)
{
	while (a->next)
	{
		if (a->data > a->next->data)
			return (0);
		a = a->next;
	}
	return (1);
}

int	ft_size(t_node	*stack)
{
	int	i;

	i = 0;
	while (stack)
	{
		stack = stack->next;
		i++;
	}
	return (i);
}
