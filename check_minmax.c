/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_minmax.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-berh <oel-berh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 14:13:33 by oel-berh          #+#    #+#             */
/*   Updated: 2022/03/06 19:16:49 by oel-berh         ###   ########.fr       */
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
