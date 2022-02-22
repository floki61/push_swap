#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
#include <string.h>
#include <limits.h>

struct node{
	int data;
	struct node* next;
};

void    sa(struct node** a,char *str);
void		sb(struct node** p);
void    sort_3(struct node** a);
void rra(struct node** a);
void ra(struct node** a);
void	ft_lstadd_back(struct node **alst, struct node *new);
 struct node	*ft_lstnew(int content);
struct node	*ft_lstlast(struct node *lst);
int	lineardata_data(char *argv[],struct node **head);
int ft_strlen(char *str);
int	ft_isdigit(int c);
long long	ft_atoi(const char *str);
void    pb(struct node **a,struct node** b);
void	sort_2(struct node **a);
void    sort_4(struct node   **a,struct node   **b);
void    sort_5(struct node   **a,struct node   **b);
void	pa(struct node** a, struct node** b);
int    check_min(struct node   *stack);
int	position(struct node *stack, int *i, int pos);
int	lent_stack(struct node  *stack);
void    sort(struct node   **a,struct node   **b);
int    check_max(struct node   *stack);
int    move_num(struct node **a,int pos,int *k);
int nearest_num(struct node **a,int	b);
int    check_end(struct node **stack);
void    sort_help(struct node **a,struct node **b);
void  trtib(struct node **a);

#endif