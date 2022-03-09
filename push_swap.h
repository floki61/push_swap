/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-berh <oel-berh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 19:03:04 by oel-berh          #+#    #+#             */
/*   Updated: 2022/03/06 19:03:04 by oel-berh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <limits.h>

typedef struct s_node
{
	int				data;
	struct s_node	*next;
	int				value;
}				t_node;

void		sa(t_node **a, char	*str);
void		sb(t_node **b);
void		rotate(t_node **stack, int i);
void		reverse_r(t_node **stack, int i);
void		pa(t_node **a, t_node **b);
void		pb(t_node **a, t_node **b);
void		sort0(t_node **a, t_node **b);
void		sort_2(t_node **a);
void		sort_3(t_node **a);
void		sort_4(t_node **a, t_node **b);
void		sort_5(t_node **a, t_node **b);
int			ft_strlen(char *str);
int			ft_isdigit(int c);
long long	ft_atoi(const char *str);
t_node		*ft_lstnew(int content);
t_node		*ft_lstlast(t_node *lst);
void		ft_lstadd_back(t_node **alst, t_node *new);
int			lineardata(char *argv[], t_node **head);
int			check_min(t_node *stack);
int			check_max(t_node *stack);
int			check_min_value(t_node *stack);
int			move_num(t_node **a, t_node **b);
void		value(t_node *a, t_node *b);
void		sorted(int index, int i, t_node **stack, int j);
void		minmax(t_node **a, t_node **b);
int			position(t_node *stack, int *i, int pos);
int			lent_stack(t_node *stack);
void		roue(t_node **a);
int			nearest_num(t_node **a, t_node **b);
int			pos_nearest_num(t_node **a, int j);
int    		is_sorted(t_node *a);
char    	*its_sorted(t_node *a);
char *get_next_line(int fd);

// int    check_end(t_node **stack);
// void    sort_help(t_node **a,t_node **b);
void		print_stack(t_node *a);
// void printf_value(t_node *stack);

#endif