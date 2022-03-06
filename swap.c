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

void	sa(t_node **a, char	*str)
{
	int	swap;

	if (!(*a) || !(*a)->next)
		return ;
	swap = (*a)->data;
	(*a)->data = (*a)->next->data;
	(*a)->next->data = swap;
	write(1, str, 3);
	write(1, "\n", 1);
}

void	sb(t_node **b)
{
	int	swap;

	if (!(*b) || !(*b)->next)
		return ;
	swap = (*b)->data;
	(*b)->data = (*b)->next->data;
	(*b)->next->data = swap;
	write (1, "sb\n", 3);
}

void	ss(t_node **stack_a, t_node **stack_b)
{
	sa (stack_a, "sa");
	sb (stack_b);
	write (1, "ss\n", 3);
}
