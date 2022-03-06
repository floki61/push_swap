/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-berh <oel-berh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 16:43:00 by oel-berh          #+#    #+#             */
/*   Updated: 2022/03/06 22:51:17 by oel-berh         ###   ########.fr       */
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
		rra (a);
	}
	else if (_1_ > _2_ && _1_ < _3_)
		sa (a, "sa");
	else if (_1_ > _3_ && _2_ < _3_)
		ra (a);
	else if (_1_ < _2_ && _2_ > _3_ && _1_ < _3_)
	{
		sa (a, "sa");
		ra (a);
	}
	else if (_1_ < _2_ && _2_ > _3_ && _1_ > _3_)
		rra (a);
}

void	sort_4(t_node **a, t_node **b)
{
	int	pos;
	int	i;
	int	d;

	i = 0;
	pos = check_min (*a);
	d = position(*a, &i, pos);
	sorted(d, i, a);
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
	sorted (d, i, a);
	pb (a, b);
	sort_4 (a, b);
	pa (a, b);
}
