/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-berh <oel-berh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 16:43:48 by oel-berh          #+#    #+#             */
/*   Updated: 2022/03/03 16:43:48 by oel-berh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_r(t_node **stack, int i)
{
	t_node	*tmp;
	t_node	*prev;
	t_node	*newnode;

	if (!(*stack) || !(*stack)->next)
		return ;
	tmp = *stack;
	newnode = malloc(sizeof(t_node));
	while (tmp->next != NULL)
	{
		prev = tmp;
		tmp = tmp->next;
	}
	prev->next = NULL;
	newnode->data = tmp->data;
	free (tmp);
	newnode->next = *stack;
	*stack = newnode;
	if (i == 1)
		write (1, "rra\n", 4);
	else
		write (1, "rrb\n", 4);
}

void	rotate(t_node **stack, int i)
{
	t_node	*tmp;
	t_node	*head;

	if (!*stack || !(*stack)->next)
		return ;
	head = (*stack)->next;
	tmp = *stack;
	ft_lstlast(tmp)->next = *stack;
	(*stack)->next = NULL;
	*stack = head;
	if (i == 1)
		write (1, "ra\n", 3);
	else
		write (1, "rb\n", 3);
}
