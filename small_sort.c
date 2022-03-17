/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-berh <oel-berh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 16:43:00 by oel-berh          #+#    #+#             */
/*   Updated: 2022/03/17 23:35:09 by oel-berh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_2(t_node **a)
{
	if ((*a)->data > (*a)->next->data)
		sa (a, 1);
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
		sa (a, 1);
		reverse_r (a, 1);
	}
	else if (_1_ > _2_ && _1_ < _3_)
		sa (a, 1);
	else if (_1_ > _3_ && _2_ < _3_)
		rotate (a, 1);
	else if (_1_ < _2_ && _2_ > _3_ && _1_ < _3_)
	{
		sa (a, 1);
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
	if (is_sorted (*a) == 1 && ft_size (*b) == 0)
		exit (0);
	pb (a, b, 1);
	sort_3 (a);
	pa (a, b, 1);
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
	if (is_sorted (*a) == 1 && ft_size (*b) == 0)
		exit (0);
	pb (a, b, 1);
	sort_4 (a, b);
	pa (a, b, 1);
}
