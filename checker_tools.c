/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_tools.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-berh <oel-berh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 18:50:49 by oel-berh          #+#    #+#             */
/*   Updated: 2022/03/17 23:21:18 by oel-berh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_tab(char **tab)
{
	int	j;

	j = 0;
	while (tab[j])
	{
		free(tab[j]);
		j++;
	}
	free(tab);
}

int	is_instr(char *instruction)
{
	char	**operation;
	int		i;

	i = 0;
	operation = ft_split("sa\n sb\n ss\n pa\n pb\n ra\n rb\n rr\n rra\n rrb\n rrr\n", ' ');
	while (operation[i])
	{
		if (strcmp (operation[i], instruction) == 0)
		{
			free_tab (operation);
			return (0);
		}
		i++;
	}
	write (2, "Error\n", 6);
	free_tab (operation);
	return (1);
}

void	sort_oper(char *oper, t_node **a, t_node **b)
{
	if (!(strcmp(oper, "sa\n")))
		sa(a, 2);
	else if (!(strcmp(oper, "sb\n")))
		sb(b, 2);
	else if (!(strcmp(oper, "ss\n")))
		ss(a, b, 2);
	else if (!(strcmp(oper, "pa\n")))
		pa(a, b, 2);
	else if (!(strcmp(oper, "pb\n")))
		pb(a, b, 2);
	else if (!(strcmp(oper, "ra\n")))
		rotate(a, 2);
	else if (!(strcmp(oper, "rb\n")))
		rotate(b, 2);
	else if (!(strcmp(oper, "rra\n")))
		reverse_r(a, 2);
	else if (!(strcmp(oper, "rrb\n")))
		reverse_r(b, 2);
	else if (!(strcmp(oper, "rrr\n")))
		rrr(a, b, 2);
	else if (!(strcmp(oper, "rr\n")))
		rr(a, b, 2);
}
