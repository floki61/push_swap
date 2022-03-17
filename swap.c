/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-berh <oel-berh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 14:13:27 by oel-berh          #+#    #+#             */
/*   Updated: 2022/03/03 14:13:27 by oel-berh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_node **a, int i)
{
	int	swap;

	if (!(*a) || !(*a)->next)
		return ;
	swap = (*a)->data;
	(*a)->data = (*a)->next->data;
	(*a)->next->data = swap;
	if (i == 1)
		write (1, "sa\n", 3);
}

void	sb(t_node **b, int i)
{
	int	swap;

	if (!(*b) || !(*b)->next)
		return ;
	swap = (*b)->data;
	(*b)->data = (*b)->next->data;
	(*b)->next->data = swap;
	if (i == 1)
		write (1, "sb\n", 3);
}

void	ss(t_node **stack_a, t_node **stack_b, int i)
{
	sa (stack_a, 2);
	sb (stack_b, 2);
	if (i == 1)
		write (1, "ss\n", 3);
}
