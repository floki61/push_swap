/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-berh <oel-berh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 16:43:00 by oel-berh          #+#    #+#             */
/*   Updated: 2022/03/07 18:57:45 by oel-berh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_2(t_node **a)
{
	if ((*a)->data > (*a)->next->data)
		sa (a, "sa");
}

void	sort_3(t_node **a)
{
	int	_1_;
	int	_2_;
	int	_3_;

	_1_ = (*a)->data;
	_2_ = (*a)->next->data;
	_3_ = (*a)->next->next->data;
	if (_1_ > _2_ && _2_ > _3_)
	{
		sa (a, "sa");
		reverse_r (a, 1);
	}
	else if (_1_ > _2_ && _1_ < _3_)
		sa (a, "sa");
	else if (_1_ > _3_ && _2_ < _3_)
		rotate (a, 1);
	else if (_1_ < _2_ && _2_ > _3_ && _1_ < _3_)
	{
		sa (a, "sa");
		rotate (a, 1);
	}
	else if (_1_ < _2_ && _2_ > _3_ && _1_ > _3_)
		reverse_r (a, 1);
}

void	sort_4(t_node **a, t_node **b)
{
	int	pos;
	int	i;
	int	d;

	i = 0;
	pos = check_min (*a);
	d = position(*a, &i, pos);
	sorted(d, i, a, 1);
	pb (a, b);
	sort_3 (a);
	pa (a, b);
}

void	sort_5(t_node **a, t_node **b)
{
	int	pos;
	int	i;
	int	d;

	i = 0;
	pos = check_min (*a);
	d = position (*a, &i, pos);
	sorted (d, i, a, 1);
	pb (a, b);
	sort_4 (a, b);
	pa (a, b);
}
