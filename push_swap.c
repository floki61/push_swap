/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-berh <oel-berh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 16:50:00 by oel-berh          #+#    #+#             */
/*   Updated: 2022/03/17 21:23:47 by oel-berh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_node	*stack_a;
	t_node	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc < 2 || !lineardata (argv, &stack_a))
		return (0);
	if (--argc == 2)
		sort_2 (&stack_a);
	if (argc == 3)
		sort_3 (&stack_a);
	else if (argc == 4)
		sort_4 (&stack_a, &stack_b);
	else if (argc == 5)
		sort_5 (&stack_a, &stack_b);
	else if (argc > 5)
		sort (&stack_a, &stack_b);
	// print_stack (stack_a);
	// system("leaks push_swap");
	// printf("%s\n",is_sorted(stack_a));
	return (0);
}
