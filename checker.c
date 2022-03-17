/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-berh <oel-berh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 19:51:43 by oel-berh          #+#    #+#             */
/*   Updated: 2022/03/17 23:23:28 by oel-berh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstclear(t_node **lst)
{
	t_node	*temp;

	if (lst)
	{
		while (*lst)
		{
			temp = *lst;
			*lst = temp->next;
			free(temp);
		}
	}	
}

int	main(int argc, char *argv[])
{
	t_node	*stack_a;
	t_node	*stack_b;
	char	*instruction;

	stack_a = NULL;
	stack_b = NULL;
	if (argc < 2 || !lineardata (argv, &stack_a))
		return (0);
	while ((instruction = get_next_line(0)))
	{
		if (is_instr(instruction) == 1)
			exit (0);
		sort_oper (instruction, &stack_a, &stack_b);
		free (instruction);
		if (is_sorted (stack_a) == 1 && ft_size (stack_b) == 0)
		{
			write (1, "OK\n", 3);
			exit (0);
		}
	}
	if (is_sorted (stack_a) == 1 && ft_size (stack_b) == 0)
		write (1, "OK\n", 3);
	else
		write (1, "KO\n", 3);
	return (0);
}
