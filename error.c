/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-berh <oel-berh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 14:27:09 by oel-berh          #+#    #+#             */
/*   Updated: 2022/03/17 23:26:49 by oel-berh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

static	int	check_numbers(char *argv[])
{
	int	i;
	int	n;

	i = 1;
	while (argv[i])
	{
		n = 0;
		if (argv[i][n] == '-' && argv[i][n + 1])
				n = 1;
		while (ft_strlen(argv[i]) > n)
		{
			if (!ft_isdigit(argv[i][n]))
				return (0);
			n++;
		}
		i++;
	}
	return (1);
}

static	int	duplication(char *argv[])
{
	int	i;
	int	n;

	i = 1;
	while (argv[i])
	{
		if (ft_atoi(argv[i]) > INT_MAX || ft_atoi(argv[i]) < INT_MIN)
			return (0);
		n = i + 1;
		while (argv[n])
		{
			if (atoi(argv[i]) == atoi(argv[n]))
				return (0);
			n++;
		}
		i++;
	}
	return (1);
}

int	lineardata(char *argv[], t_node **head)
{
	int	i;

	i = 1;
	if (!check_numbers(argv) || !duplication(argv))
	{
		write (2, "Error\n", 6);
		return (0);
	}
	while (argv[i])
	{
		ft_lstadd_back (head, ft_lstnew(atoi(argv[i])));
		i++;
	}
	return (1);
}
