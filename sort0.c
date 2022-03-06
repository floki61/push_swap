/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort0.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-berh <oel-berh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 16:35:50 by oel-berh          #+#    #+#             */
/*   Updated: 2022/03/06 19:07:09 by oel-berh         ###   ########.fr       */
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
		sorted (pos, i, b);
		pos = position (*a, &i, nearest_num (a, b));
		sorted (pos, i, a);
		pa (a, b);
	}
	roue (a);
}
