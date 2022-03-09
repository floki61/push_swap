/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort0.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-berh <oel-berh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 16:35:50 by oel-berh          #+#    #+#             */
/*   Updated: 2022/03/07 19:07:56 by oel-berh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort0(t_node **a, t_node **b)
{
	int	lent;
	int	i;
	int	pos;

	minmax (a, b);
	lent = lent_stack (*b);
	while (lent--)
	{
		value (*a, *b);
		pos = position (*b, &i, check_min_value (*b));
		sorted (pos, i, b, 0);
		pos = position (*a, &i, nearest_num (a, b));
		sorted (pos, i, a, 1);
		pa (a, b);
	}
	roue (a);
}

void	sorted(int index, int i, t_node **stack, int j)
{
	if (index == 1)
	{
		while (i-- > 0)
			rotate (stack, j);
	}
	else
	{
		while (i-- > 0)
			reverse_r (stack, j);
	}
}
